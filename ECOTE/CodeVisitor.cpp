#include "CodeVisitor.h"



antlrcpp::Any CodeVisitor::visitParameterdeclaration(CParser::ParameterdeclarationContext *context)
{
	NameVisitor nameVisitor;
	context->accept(&nameVisitor);
	variableNames.push_back(nameVisitor.variableName);
	return context;
}

antlrcpp::Any CodeVisitor::visitSimpledeclaration(CParser::SimpledeclarationContext *context)
{

	NameVisitor nameVisitor;
	context->accept(&nameVisitor);
	variableNames.push_back(nameVisitor.variableName);
	return context;
}

antlrcpp::Any CodeVisitor::visitIterationstatement(CParser::IterationstatementContext *context)
{
	
	mainLoops.push_back(context);

	LoopHandler loopHandler(context, variableNames);

	bannedStatments |= loopHandler.bannedStatements;


	return context;
}

antlrcpp::Any CodeVisitor::visitLabeledstatement(CParser::LabeledstatementContext *context)
{
	bannedStatments = true;
	return visitChildren(context);
}

antlrcpp::Any CodeVisitor::visitJumpstatement(CParser::JumpstatementContext *context)
{
	bannedStatments = true;
	return visitChildren(context);
}

antlrcpp::Any CodeVisitor::visitUnaryoperator(CParser::UnaryoperatorContext *context)
{
	for (auto child : context->children)
	{
		if (child->getText() == "*" || child->getText() == "&")
		{
			bannedStatments = true;
			break;
		}
	}
	return visitChildren(context);
}

antlrcpp::Any CodeVisitor::visitPostfixexpression(CParser::PostfixexpressionContext *context)
{
	for (auto child : context->children)
	{
		if (child->getText() == "(")
		{
			bannedStatments = true;
			break;
		}
	}
	return visitChildren(context);
}


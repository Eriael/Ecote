#include "StatementOrderVisitor.h"



antlrcpp::Any StatementOrderVisitor::visitAssignmentexpression(CParser::AssignmentexpressionContext *context)
{
	counter++;
	StatementSplitterVisitor statementSplitterVisitor;
	context->accept(&statementSplitterVisitor);
	
	if (!insideIfStatement)
	{
		statmentByOrder[counter] = make_tuple(context, true, statementSplitterVisitor.leftSide, statementSplitterVisitor.rightSide);
		orderByStatement[context] = make_tuple(counter, true, statementSplitterVisitor.leftSide, statementSplitterVisitor.rightSide);
	}
	else
	{
		statmentByOrder[counter] = make_tuple(context, false, statementSplitterVisitor.leftSide, statementSplitterVisitor.rightSide);
		orderByStatement[context] = make_tuple(counter, false, statementSplitterVisitor.leftSide, statementSplitterVisitor.rightSide);
	}

	return context;
}

antlrcpp::Any StatementOrderVisitor::visitIterationstatement(CParser::IterationstatementContext *context)
{
	return context;
}

antlrcpp::Any StatementOrderVisitor::visitSimpledeclaration(CParser::SimpledeclarationContext *context)
{
	insideDeclaration = true;
	visitChildren(context);
	insideDeclaration = false;
	return context;
}

antlrcpp::Any StatementOrderVisitor::visitInitdeclarator(CParser::InitdeclaratorContext *context)
{
	if (insideDeclaration)
	{
		counter++;
		StatementSplitterVisitor statementSplitterVisitor;
		context->accept(&statementSplitterVisitor);
		varNamesIn.push_back(statementSplitterVisitor.leftSide);
		statmentByOrder[counter] = make_tuple(context, false, statementSplitterVisitor.leftSide, statementSplitterVisitor.rightSide);
		orderByStatement[context] = make_tuple(counter, false, statementSplitterVisitor.leftSide, statementSplitterVisitor.rightSide);

	}
	return context;
	
}

antlrcpp::Any StatementOrderVisitor::visitSelectionstatement(CParser::SelectionstatementContext *context)
{
	insideIfStatement = true;
	visitChildren(context);
	insideIfStatement = false;
	return context;
}


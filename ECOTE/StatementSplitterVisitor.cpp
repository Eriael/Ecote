#include "StatementSplitterVisitor.h"



antlrcpp::Any StatementSplitterVisitor::visitUnqualifiedid(CParser::UnqualifiedidContext *context)
{
	if (leftFound)
	{
		rightSide.push_back(context->getText());
	}
	else
	{
		leftFound = true;
		leftSide = context->getText();
	}
	return context;
}
/*
antlrcpp::Any StatementSplitterVisitor::visitLiteral(CParser::LiteralContext *context)
{

	rightSide.push_back(context->getText());	
	return context;
}*/
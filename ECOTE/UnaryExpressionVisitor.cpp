#include "UnaryExpressionVisitor.h"


antlrcpp::Any UnaryExpressionVisitor::visitUnaryexpression(CParser::UnaryexpressionContext *context)
{
	for (auto child : context->children)
	{
		if (child->getText() == "++" || child->getText() == "--")
		{
			changesValue = true;
			return context;
		}
	}
	isUnary = true;
	visitChildren(context);
	isUnary = false;
	return context;
}

antlrcpp::Any UnaryExpressionVisitor::visitPostfixexpression(CParser::PostfixexpressionContext *context)
{
	if (isUnary)
	{
		for (auto child : context->children)
		{
			if (child->getText() == "++" || child->getText() == "--")
			{
				changesValue = true;
				break;
			}
		}
	}
	return context;
}
#include "FunctionVisitor.h"



antlrcpp::Any FunctionVisitor::visitFunctiondefinition(CParser::FunctiondefinitionContext *context)
{
	results.push_back(context);
	return context;
}
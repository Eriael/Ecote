#include "AssignmentOperatorVisitor.h"

antlrcpp::Any AssignmentOperatorVisitor::visitAssignmentoperator(CParser::AssignmentoperatorContext *context)
{
	if (context->getText() == "=")
	{
		assignmentOperation = true;
	}
	else
	{
		assignmentOperation = false;
	}
	return context;
}

#include "NameVisitor.h"



antlrcpp::Any NameVisitor::visitUnqualifiedid(CParser::UnqualifiedidContext *context)
{
	variableName = context->getText();
	return context;
}

antlrcpp::Any NameVisitor::visitInitializer(CParser::InitializerContext *context)
{
	return context;
}

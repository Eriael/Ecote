#pragma once
#include "pch.h"
#include "../antlr4-runtime/CLexer.h"
#include "../antlr4-runtime/CParser.h"
#include "../antlr4-runtime/CBaseListener.h"
#include "../antlr4-runtime/CBaseVisitor.h"

#include <iostream>
#include <string>
#include "..\vcpkg-master\vcpkg-master\installed\x64-windows\include\antlr4-runtime.h"
#include "..\vcpkg-master\vcpkg-master\installed\x64-windows\include\support\any.h"

using namespace std;
using namespace antlr4;


class NameVisitor : public CBaseVisitor
{
public:
	string variableName;
	antlrcpp::Any visitUnqualifiedid(CParser::UnqualifiedidContext *context);

	antlrcpp::Any visitInitializer(CParser::InitializerContext *context);
};


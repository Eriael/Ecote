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
#include <string>

using namespace std;
using namespace antlr4;

class StatementSplitterVisitor : public CBaseVisitor
{
public:
	string leftSide;
	vector<string> rightSide;
	bool leftFound = false;


	antlrcpp::Any visitUnqualifiedid(CParser::UnqualifiedidContext *context);
	//antlrcpp::Any visitLiteral(CParser::LiteralContext *context);
};


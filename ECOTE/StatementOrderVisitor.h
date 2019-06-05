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
#include "StatementSplitterVisitor.h"

using namespace std;
using namespace antlr4;

class StatementOrderVisitor : public CBaseVisitor
{
public:
	int counter = 0;
	map<int, tuple<tree::ParseTree*, bool, string, vector<string>>> statmentByOrder;
	map<tree::ParseTree*, tuple<int, bool, string, vector<string>>> orderByStatement;
	bool insideDeclaration = false;
	bool insideIfStatement = false;
	vector<string> varNamesIn;

	antlrcpp::Any visitAssignmentexpression(CParser::AssignmentexpressionContext *context);

	antlrcpp::Any visitIterationstatement(CParser::IterationstatementContext *context);

	antlrcpp::Any visitSimpledeclaration(CParser::SimpledeclarationContext *context);

	antlrcpp::Any visitInitdeclarator(CParser::InitdeclaratorContext *context);

	antlrcpp::Any visitSelectionstatement(CParser::SelectionstatementContext *context);

	
};
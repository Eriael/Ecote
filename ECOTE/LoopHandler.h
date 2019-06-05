#pragma once
#include "pch.h"
#include "../antlr4-runtime/CLexer.h"
#include "../antlr4-runtime/CParser.h"
#include "../antlr4-runtime/CBaseListener.h"
#include "../antlr4-runtime/CBaseVisitor.h"

#include <iostream>
#include <fstream>
#include <string>
#include "..\vcpkg-master\vcpkg-master\installed\x64-windows\include\antlr4-runtime.h"
#include "..\vcpkg-master\vcpkg-master\installed\x64-windows\include\support\any.h"
#include "CodeVisitor.h"
#include "BackToCode.h"
#include "StatementOrderVisitor.h"
#include "DeclarationRemoverVisitor.h"
#include "UnaryExpressionVisitor.h"
#include "AssignmentOperatorVisitor.h"

using namespace std;
using namespace antlr4;



class LoopHandler
{
public:
	LoopHandler(tree::ParseTree *loopTree, vector<string> varNamesOutContext);
	bool bannedStatements = false;

private:
	tree::ParseTree* loopTree;
	vector<string> varNamesOutSide;
	bool allChangingVarFound = false;
	vector<string> changedVar;
	bool insideOfLoop;
	
	

	void handleLoop();
	void findChangingVariables(StatementOrderVisitor* statementOrderVisitor);

};
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



class BackToCode
{
public:
	string code = "";

	BackToCode(tree::ParseTree* tree);

private:
	tree::ParseTree* tree;
	int indentationAmount = 0;
	bool indentation = false;
	int forBrackets = 0;
	bool insideLoop = false;

	void getCode(tree::ParseTree* currTree);
	std::string repeatString(std::string const& str, int n);
};


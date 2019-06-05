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
#include "FunctionVisitor.h"
#include "CodeVisitor.h"

using namespace std;
using namespace antlr4;



class CodeHandler
{
public:
	CodeHandler(string file);
	
	string getCode();
	void makeFile();
	void makeFile(string name);

private:
	string inFile;
	tree::ParseTree* codeTree;
	std::vector<tree::ParseTree*> functionsTrees;
	string outCode;
	

	void handleCode();
};

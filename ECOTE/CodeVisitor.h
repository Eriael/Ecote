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
#include "LoopHandler.h"
#include "NameVisitor.h"

using namespace std;
using namespace antlr4;

class CodeVisitor : public CBaseVisitor
{
public:
	std::vector<string> variableNames;
	std::vector<tree::ParseTree*> mainLoops;
	bool bannedStatments = false;

	antlrcpp::Any visitParameterdeclaration(CParser::ParameterdeclarationContext *context);
	antlrcpp::Any visitSimpledeclaration(CParser::SimpledeclarationContext *context);
	antlrcpp::Any visitIterationstatement(CParser::IterationstatementContext *context);
	antlrcpp::Any visitLabeledstatement(CParser::LabeledstatementContext *context);
	antlrcpp::Any visitJumpstatement(CParser::JumpstatementContext *context);
	antlrcpp::Any visitUnaryoperator(CParser::UnaryoperatorContext *context);
	antlrcpp::Any visitPostfixexpression(CParser::PostfixexpressionContext *context);
};



#include "CodeHandler.h"



CodeHandler::CodeHandler(string file)
{
	inFile = file;
	handleCode();
}

void CodeHandler::handleCode()
{
	std::ifstream fileStream(inFile);
	if (!fileStream.is_open())
	{
		throw exception();
	}
	antlr4::ANTLRInputStream input(fileStream);
	fileStream.close();
	CLexer lexer(&input);
	CommonTokenStream tokens(&lexer);
	tokens.fill();
	CParser parser(&tokens);
	codeTree = parser.translationunit();
	FunctionVisitor functionVisitor;
	codeTree->accept(&functionVisitor);
	functionsTrees = functionVisitor.results;

	CodeVisitor *codeVisitor;
	for (auto function : functionsTrees)
	{
		codeVisitor = new CodeVisitor;
		function->accept(codeVisitor);		
	}

	BackToCode btc(codeTree);
	outCode = btc.code;
}

string CodeHandler::getCode()
{
	return outCode;
}

void CodeHandler::makeFile()
{
	string newFile = inFile;
	string extension = "";
	while (newFile.back() != '.')
	{
		extension.push_back(newFile.back());
		newFile.pop_back();
	}
	extension.reserve();
	newFile.pop_back();
	newFile = newFile + "Fixed." + extension;
	std::ofstream outfile(newFile);

	outfile << outCode << std::endl;

	outfile.close();
}

void CodeHandler::makeFile(string name)
{
	std::ofstream outfile(name);

	outfile << outCode << std::endl;

	outfile.close();
}
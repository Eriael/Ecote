

#include "pch.h"
#include "../antlr4-runtime/CLexer.h"
#include "../antlr4-runtime/CParser.h"
#include "../antlr4-runtime/CBaseListener.h"
#include "../antlr4-runtime/CBaseVisitor.h"

#include <iostream>
#include <fstream>
#include <string>
#include "..\vcpkg-master\vcpkg-master\installed\x64-windows\include\antlr4-runtime.h"
#include "CodeHandler.h"

using namespace std;
using namespace antlr4;






int main(int argc, char *argv[])
{
	
	if (argc == 2)
	{
		CodeHandler codeHandler(argv[1]);
		cout << "\n\n\n" << codeHandler.getCode();

		codeHandler.makeFile();
	}
	else
	{
		string input;
		bool correctPath = false;
		while (!correctPath)
		{
			cout << "Enter input file path.\n\n";
			cin >> input;
			std::ifstream fileStream(input);
			if (fileStream.is_open())
			{
				correctPath = true;
				fileStream.close();
			}
			else
			{
				//system("cls");
				cout << "\nPath is not correct!\n";
			}
		}
		CodeHandler codeHandler(input);
		cout << "\n\n" << codeHandler.getCode() << "\n\n";
		
		correctPath = false;
		while (!correctPath)
		{
			cout << "Enter  output file name.\n\n";
			cin >> input;
			std::ifstream test(input);
			if(!test)
			{
				correctPath = true;
			}
			else
			{
				//system("cls");
				cout << "\nName is not correct!\n";
			}
		}
		codeHandler.makeFile(input);
	}
	
	return 0;
}
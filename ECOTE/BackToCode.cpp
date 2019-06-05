#include "BackToCode.h"

BackToCode::BackToCode(tree::ParseTree* tree)
{
	this->tree = tree;
	getCode(tree);
}

void BackToCode::getCode(tree::ParseTree* currTree)
{
	if (currTree->children.size() == 0 && currTree->getText() != "<EOF>" && currTree->getText() != "")
	{
		string result = currTree->getText();

		if (result == "{")
		{
			code.append("\n" + repeatString("   ", indentationAmount) + result + "\n");
			indentation = true;
			indentationAmount += 1;
		}
		else if (result == "}")
		{
			indentationAmount -= 1;
			code.append(repeatString("   ", indentationAmount) + result + "\n");
			indentation = true;

		}
		else if (result == ";" && forBrackets == 0)
		{
			indentation = true;
			code.append(result + "\n");
		}
		else if (result == "for")
		{
			insideLoop = true;
			code.append((indentation ? repeatString("   ", indentationAmount) : "") + result);
			indentation = false;
		}
		else if (result == "(" && insideLoop)
		{
			forBrackets++;
			code.append((indentation ? repeatString("   ", indentationAmount) : "") + result + " ");
		}
		else if (result == ")" && insideLoop)
		{
			forBrackets--;
			code.append((indentation ? repeatString("   ", indentationAmount) : "") + result + " ");
			if (forBrackets == 0)
				insideLoop = false;

		}
		else
		{
			code.append((indentation ? repeatString("   ", indentationAmount) : "") + result + " ");
			indentation = false;
		}
	}
	else
	{
		for (int i = 0; i < currTree->children.size(); i++)
		{
			getCode(currTree->children.at(i));
		}
	}
}

std::string BackToCode::repeatString(std::string const& str, int n)
{
	string result = "";
	for (int i = 0; i < n; i++)
	{
		result.append(str);
	}
	return result;
}
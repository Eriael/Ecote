#include "LoopHandler.h"

LoopHandler::LoopHandler(tree::ParseTree *loopTree, vector<string> varNamesOutContext)
{
	this->loopTree = loopTree;
	this->varNamesOutSide = varNamesOutContext;
	handleLoop();
}

void LoopHandler::handleLoop()
{

	CodeVisitor codeVisitor;
	for (auto child : loopTree->children)
	{
		child->accept(&codeVisitor);
	}



	if (codeVisitor.bannedStatments == true)
	{
		bannedStatements = true;
		return;
	}

	StatementOrderVisitor statementOrderVisitor;
	for (auto child : loopTree->children)
	{
		child->accept(&statementOrderVisitor);
	}

	for (map<int, tuple<tree::ParseTree*, bool, string, vector<string>>>::iterator it = statementOrderVisitor.statmentByOrder.begin(); it != statementOrderVisitor.statmentByOrder.end(); it++)
	{
		if (!get<1>(it->second))
		{
			changedVar.push_back(get<2>(it->second));
		}
	}

	findChangingVariables(&statementOrderVisitor);

	for (map<int, tuple<tree::ParseTree*, bool, string, vector<string>>>::iterator it = statementOrderVisitor.statmentByOrder.begin(); it != statementOrderVisitor.statmentByOrder.end(); it++)
	{
		if (get<1>(it->second))
		{
			tree::ParseTree *parentNode = loopTree;
			tree::ParseTree *childNode = get<0>(it->second);
			while(dynamic_cast<CParser::StatementseqContext*>(parentNode) == nullptr)
			{
				parentNode = parentNode->parent;
			}
			while (dynamic_cast<CParser::StatementContext*>(childNode) == nullptr)
			{
				childNode = childNode->parent;
			}
			tree::ParseTree *temp = parentNode->children.at(parentNode->children.size() - 1 );
			parentNode->children[parentNode->children.size() - 1] = childNode;
			parentNode->children.push_back(temp);
			
			bool overWrite = false;
			for (int i = 0; i < childNode->parent->children.size(); i++)
			{
				if (childNode->parent->children.at(i) == childNode)
				{
					overWrite = true;
				}
				if (overWrite &&  i + 1 < childNode->parent->children.size())
				{
					childNode->parent->children[i] = childNode->parent->children.at(i + 1);
				}
			}
			childNode->parent->children.pop_back();
			childNode->parent = parentNode;
		}
	}
}


void LoopHandler::findChangingVariables(StatementOrderVisitor* statementOrderVisitor)
{
	bool thereWereChages = false;
	
	for (map<int, tuple<tree::ParseTree*, bool, string, vector<string>>>::iterator it = statementOrderVisitor->statmentByOrder.begin(); it != statementOrderVisitor->statmentByOrder.end(); it++)
	{
		if (get<1>(it->second))
		{
			UnaryExpressionVisitor unaryExpressionVisitor;
			get<0>(it->second)->accept(&unaryExpressionVisitor);
			if (unaryExpressionVisitor.changesValue)
			{
				changedVar.push_back(get<2>(it->second));
				get<1>(it->second) = false;
				thereWereChages = true;
				break;
			}
			else
			{
				AssignmentOperatorVisitor assigmentOperatorVisitor;
				get<0>(it->second)->accept(&assigmentOperatorVisitor);
				if (!assigmentOperatorVisitor.assignmentOperation)
				{
					assigmentOperatorVisitor.assignmentOperation = false;
					changedVar.push_back(get<2>(it->second));
					get<1>(it->second) = false;
					thereWereChages = true;

				}
				else
				{
					string leftSide = get<2>(it->second);
					bool isDeclaredOutside = false;
					for (auto curr : varNamesOutSide)
					{
						if (leftSide == curr)
						{
							isDeclaredOutside = true;
						}
					}

					for (auto curr : get<3>(it->second))
					{
						if (leftSide == curr && get<3>(it->second).size() > 1)
						{
							get<1>(it->second) = false;
							thereWereChages = true;
							changedVar.push_back(leftSide);
							break;
						}
					}

					if (isDeclaredOutside)
					{
						for (map<int, tuple<tree::ParseTree*, bool, string, vector<string>>>::iterator it2 = statementOrderVisitor->statmentByOrder.begin(); it2 != statementOrderVisitor->statmentByOrder.end() && it != it2; it2++)
						{
							for (auto curr : get<3>(it2->second))
							{
								if (leftSide == curr)
								{
									get<1>(it->second) = false;
									thereWereChages = true;
									break;
								}
							}
						}
					}

					for (auto curr : changedVar)
					{
						if (leftSide == curr)
						{
							get<1>(it->second) = false;
							thereWereChages = true;
							break;
						}
					}

					vector<string> rightSide = get<3>(it->second);

					for (int j = 0; j < rightSide.size(); j++)
					{
						for (int i = 0; i < changedVar.size(); i++)
						{
							if (rightSide.at(j) == changedVar.at(i))
							{
								changedVar.push_back(get<2>(it->second));
								get<1>(it->second) = false;
								thereWereChages = true;
								break;
							}
						}
						for (map<int, tuple<tree::ParseTree*, bool, string, vector<string>>>::iterator it2 = next(it, 1); it2 != statementOrderVisitor->statmentByOrder.end(); it2++)
						{
							
							
							if (rightSide.at(j) == get<2>(it2->second) && !get<1>(it2->second))
							{
								get<1>(it->second) = false;
								thereWereChages = true;
								break;

							}
						}

					}
					
				}
			}
		}

	}
	if(thereWereChages)
		findChangingVariables(statementOrderVisitor);
}
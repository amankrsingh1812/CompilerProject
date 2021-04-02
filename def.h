#ifndef DEF__
#define DEF__ 
#include <string>
#include <climits>
#include "ast.h"
#include "symbolTable.h"

using namespace std;

enum nodeTypes{
	ROOT_NODE,
	FUNCTION_NODE,
	RETURN_STATEMENT_NODE,
	EXP_STATEMENT_NODE,
	DECLARE_STATEMENT_NODE,
	DECLARE_ASSIGN_STATEMENT_NODE,
	UNARYOP_NODE,
	BINARYOP_NODE,
	ASSIGNMENTOP_NODE,
	CONSTEXP_NODE,
	IDENTIFIER_NODE,
	
};

void addDescendantNode(uintptr_t parent, uintptr_t descendant);
uintptr_t createNewNode(int Ntype, int NsubType =0, string Nvalue ="");
void setASTroot(uintptr_t root);
extern AST ast;
extern symbolTable symTab;
#endif

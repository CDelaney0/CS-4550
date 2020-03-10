#include "Token.h"
#include "Scanner.h"
#include "Debug.h"
#include "Symbol.h"
#include "Node.h"
#include "Parser.h"

#include <iostream>
#include <iomanip>
#include <string>

int main() {
	MSG("STARTING MAIN FUNCTION");

	// SCANNERCLASS TESTCODE
	// ScannerClass my_scanner("input.txt");
	//
	// TokenClass my_token;
	//
	// do {
	// my_token = my_scanner.GetNextToken();
	// std::cout << std::setw(3) << my_scanner.GetLineNumber() << std::setw(3) << ' ' << my_token << std::endl;
	// } while (my_token.GetTokenType() != ENDFILE_TOKEN);

	// SYMBOLTABLECLASS TESTCODE
	/*SymbolTableClass table;
	MSG("Adding 'FIRST'")
	table.AddEntry("FIRST");
	MSG("Adding 'SECOND'")
	table.AddEntry("SECOND");
	MSG("Adding 'THIRD'")
	table.AddEntry("THIRD");
	//MSG("ADDING 'FIRST'");
	//table.AddEntry("FIRST");
	MSG("Checking if 'SECOND' exists:");
	bool second_exists = table.Exists("SECOND");
	if (second_exists) {
	MSG("true");
	}
	else {
	MSG("false");
	}
	MSG("Getting number of added variables:");
	int var_count = table.GetCount();
	MSG(var_count);
	MSG("Getting index of 'SECOND':");
	int second_index = table.GetIndex("SECOND");
	MSG(second_index);
	MSG("Getting index of 'FOURTH':");
	int fourth_index = table.GetIndex("FOURTH");
	MSG(fourth_index);
	MSG("Setting 'FIRST' value to 4");
	table.SetValue("FIRST", 4);
	//MSG("Setting 'FOURTH' value to 1")
	//table.SetValue("FOURTH", 1);
	MSG("Getting 'FIRST' value:");
	int first_value = table.GetValue("FIRST");
	MSG(first_value);
	MSG("Getting 'SECOND' value:");
	int second_value = table.GetValue("SECOND");
	MSG(second_value);*/


	// NODE CLASSES TEST CODE
	//{
	//	int x;
	//	x = 5;
	//	cout << x + 3;
	//}
	/*SymbolTableClass symboltable = SymbolTableClass();
	IntegerNode *integern1					= new IntegerNode(3);
	IdentifierNode *identifiern1			= new IdentifierNode("x", &symboltable);
	PlusNode *plusn							= new PlusNode(identifiern1, integern1);
	CoutStatementNode *coutstatementn		= new CoutStatementNode(plusn);
	IntegerNode *integern2					= new IntegerNode(5);
	IdentifierNode *identifiern2			= new IdentifierNode("x", &symboltable);
	AssignmentStatementNode *assignmentn	= new AssignmentStatementNode(identifiern2, integern2);
	IdentifierNode *identifiern3			= new IdentifierNode("x", &symboltable);
	DeclarationStatementNode *declarationn	= new DeclarationStatementNode(identifiern3);
	StatementGroupNode *statementgroupn		= new StatementGroupNode();
	statementgroupn->AddStatement(coutstatementn);
	statementgroupn->AddStatement(assignmentn);
	statementgroupn->AddStatement(declarationn);
	BlockNode *blockn						= new BlockNode(statementgroupn);
	ProgramNode *programn					= new ProgramNode(blockn);
	StartNode *startn						= new StartNode(programn);
	delete startn;*/


	// EXPRESSION CLASSES TEST CODE
	//{
	//	Rate*3+(5-3+x)/10 <= x*(3+x*(2+x))
	//}


	// PARSER TEST CODE
	SymbolTableClass symboltable = SymbolTableClass();
	ScannerClass scanner("input.txt");
	ParserClass parser(&scanner, &symboltable);
	StartNode * sn = parser.Start();
	// sn->Interpret();
	InstructionsClass ic = InstructionsClass();
	sn->Code(ic);
	ic.Finish();
	//ic.PrintAllMachineCodes();
	ic.Execute();

	delete sn;

	return 0;
}

/*#include "token.h"
//#include "StateMachine.h"
#include <iostream>
//import "StateMachine.h"
int main(){
  TokenType tt = VOID_TOKEN;
  std::string lexeme = "void";
  TokenClass tok1(tt, lexeme);
  std::cout << tok1 << std::endl;
  return 0; 
}
/*
void main(){
  int sum;
  sum = 35 + 400;
  cout << sum;
}
*/
/*
int main(){
  ScannerClass scanner("data.txt")
  while(true){
    TokenClass Tc = Scanner(ret next token)
    Cout << TC << endl;
    if (TC(returnType() = ))
  }
}

tokenclass ScannerClass::returnsomething(){
  statemachineclass sm;
  correspondingtokentype CTT;
  machine state current = start_state;
  do
}

#include <iostream>
#include <string>
#include "Token.h"
#include "Scanner.h"
#include "Symbol.h"
#include "Node.h"
#include "Parser.h"

//TOKEN CLASS PASS OFF
/* int main() {
    ScannerClass scanner("testfile.cpp");
    TokenClass NextToken;
    while(true) {
        NextToken = scanner.GetNextToken();
        std::cout << "Line " << scanner.GetLineNumber() << ": " <<  NextToken << std::endl;
        if (NextToken.GetTokenType() == ENDFILE_TOKEN) {
            break;
        }
    }
    return 0;
} */


//SYMBOL TABLE TESTING/PASSOFF
/*int main() {
    SymbolTableClass s = SymbolTableClass();
    std::cout << "DOES IT EXIST? " << s.Exists("hello") << std::endl;
    s.AddEntry("hello");
    s.SetValue("hello",10);
   
    std::cout << "hello" << std::endl;
    std::cout << "DOES IT EXIST NOW? " << s.Exists("hello") << std::endl;
    std::cout << "WHAT IS THE VALUE? " << s.GetValue("hello") << std::endl;
    std::cout << "WHAT IS THE INDEX? " << s.GetIndex("hello") << std::endl;
    std::cout << "WHAT IS THE NUMBER OF VARIABLES? " << s.GetCount() << std::endl;
    s.AddEntry("world");
    s.SetValue("world",45);
    std::cout << "world" << std::endl;
    std::cout << "DOES IT EXIST NOW? " << s.Exists("world") << std::endl;
    std::cout << "WHAT IS THE VALUE? " << s.GetValue("world") << std::endl;
    std::cout << "WHAT IS THE INDEX? " << s.GetIndex("world") << std::endl;
    std::cout << "WHAT IS THE NUMBER OF VARIABLES? " << s.GetCount() << std::endl;
    s.AddEntry("hello");
    std::cout << "DOES DANG HAVE AN INDEX? " << s.GetIndex("dang") << std::endl;
}*/

//CHAPTER 5: NODE PASS OFF

/*int main() {
    //Start Node
    //  Program Node
    //      BlockNode
    //          StatementGroup Node
    //              Statement Nodes (Declaration,Assignment,etc.)
    SymbolTableClass* st = new SymbolTableClass();
    
    IntegerNode* i1 = new IntegerNode(12);
    CoutStatementNode* c1 = new CoutStatementNode(i1);
    IntegerNode* i2 = new IntegerNode(8);    
    CoutStatementNode* c2 = new CoutStatementNode(i2);
    
    IntegerNode* plus1 = new IntegerNode(15);
    IntegerNode* plus2 = new IntegerNode(5);
    PlusNode* plus = new PlusNode(plus1,plus2);
    IdentifierNode* id = new IdentifierNode("total",st);
    AssignmentStatementNode* an = new AssignmentStatementNode(id,plus);
    
    IntegerNode* minus1 = new IntegerNode(5);
    IntegerNode* minus2 = new IntegerNode(5);
    MinusNode* minus = new MinusNode(minus1,minus2);
    IdentifierNode* id1 = new IdentifierNode("min_total",st);
    AssignmentStatementNode* an1 = new AssignmentStatementNode(id1,minus);
    
    IntegerNode* times1 = new IntegerNode(7);
    IntegerNode* times2 = new IntegerNode(10);
    TimesNode* times = new TimesNode(times1,times2);
    IdentifierNode* id2 = new IdentifierNode("times_total",st);
    AssignmentStatementNode* an2 = new AssignmentStatementNode(id2,times);
    IntegerNode* divide1 = new IntegerNode(72);
    IntegerNode* divide2 = new IntegerNode(12);
    DivideNode* divide = new DivideNode(divide1,divide2);
    IdentifierNode* id3 = new IdentifierNode("div_total",st);
    AssignmentStatementNode* an3 = new AssignmentStatementNode(id3,divide);
    //less
    IntegerNode* less1 = new IntegerNode(72);
    IntegerNode* less2 = new IntegerNode(12);
    LessNode* l = new LessNode(less1,less2);
    IdentifierNode* lenode = new IdentifierNode("lessnode",st);
    AssignmentStatementNode* an4 = new AssignmentStatementNode(lenode,l);
    //lessequal
    IntegerNode* lessequal1 = new IntegerNode(72);
    IntegerNode* lessequal2 = new IntegerNode(12);
    LessEqualNode* l1 = new LessEqualNode(lessequal1,lessequal2);
    IdentifierNode* lessequalnode = new IdentifierNode("lessequalnode",st);
    AssignmentStatementNode* an5 = new AssignmentStatementNode(lessequalnode,l1);
    
    //greater
    IntegerNode* greater1 = new IntegerNode(72);
    IntegerNode* greater2 = new IntegerNode(12);
    GreaterNode* l2 = new GreaterNode(greater1,greater2);
    IdentifierNode* greaternode = new IdentifierNode("greaternode",st);
    AssignmentStatementNode* an6 = new AssignmentStatementNode(greaternode,l2);
    
    //greaterequal
    IntegerNode* ge1 = new IntegerNode(72);
    IntegerNode* ge2 = new IntegerNode(12);
    GreaterEqualNode* l3 = new GreaterEqualNode(ge1,ge2);
    IdentifierNode* greaterequalnode = new IdentifierNode("greaterequalnode",st);
    AssignmentStatementNode* an7 = new AssignmentStatementNode(greaterequalnode,l3);
    
    //equal
    IntegerNode* equal1 = new IntegerNode(72);
    IntegerNode* equal2 = new IntegerNode(12);
    EqualNode* l4 = new EqualNode(equal1,equal2);
    IdentifierNode* equalnode = new IdentifierNode("equalnode",st);
    AssignmentStatementNode* an8 = new AssignmentStatementNode(equalnode,l4);
    
    //notequal
    IntegerNode* ne1 = new IntegerNode(72);
    IntegerNode* ne2 = new IntegerNode(12);
    NotEqualNode* l5 = new NotEqualNode(ne1,ne2);
    IdentifierNode* notequalnode = new IdentifierNode("notequalnode",st);
    AssignmentStatementNode* an9 = new AssignmentStatementNode(notequalnode,l5);
    
    IdentifierNode* id10 = new IdentifierNode("val",st);
    DeclarationStatementNode* an10 = new DeclarationStatementNode(id10);
    
    
    
    StatementGroupNode* sg = new StatementGroupNode();
    sg->AddStatement(c1);
    sg->AddStatement(c2);
    sg->AddStatement(an);
    sg->AddStatement(an1);
    sg->AddStatement(an2);
    sg->AddStatement(an3);
    sg->AddStatement(an4);
    sg->AddStatement(an5);
    sg->AddStatement(an6);
    sg->AddStatement(an7);
    sg->AddStatement(an8);
    sg->AddStatement(an9);
    sg->AddStatement(an10);
    BlockNode* b = new BlockNode(sg);
    ProgramNode* p = new ProgramNode(b);
    StartNode* s = new StartNode(p);
    delete(s);
    std::cout << false << std::endl;
*/

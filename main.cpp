#include "token.h"
#include "scanner.h"
#include "symbol.h"
#include "node.h"
#include "parser.h"
#include "instructions.h"

int main() {
	InstructionsClass instr;
	SymbolTable *symbols = new SymbolTable();
	Scanner *scanner = new Scanner("Text.txt");
	Parser parser(scanner, symbols);
	StartNode *sn = parser.Start();
	sn->Interpret();
	/*sn->Code(instr);
	instr.Finish();
	instr.Execute();*/
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
*/*/

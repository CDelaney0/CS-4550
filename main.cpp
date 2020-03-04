#include "token.h"
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
*/

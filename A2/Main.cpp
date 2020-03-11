#include <iostream>
#include <string>
#include "Token.h"
#include "StateMachine.h"
#include "Scanner.h"

int main(){
  //test 1 passed finishes step 2
  TokenType tt = VOID_TOKEN;
  std::string lexeme = "void";
  Token tokl(tt, lexeme);
  std::cout << tokl << std::endl;
  return 0;
  
  //test 2 finishes step 5
  ScannerClass scanner("problem.txt");
  while(true){
    Token T = Scanner.GetNextToken();
    std::cout << T << std::endl;
    if (T.GetTokenType() == TokenType[-1]){
      std::cout << "end of file" << std::endl;
      break;
    }
    }
      
}

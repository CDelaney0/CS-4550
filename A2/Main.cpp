#include <iostream>
#include <string>
#include "Token.h"

int main(){
  //test 1 passed
  TokenType tt = VOID_TOKEN;
  std::string lexeme = "void";
  Token tokl(tt, lexeme);
  std::cout << tokl << std::endl;
  return 0;
}

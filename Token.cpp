#include "token.h"
#include <string>
#include <sstream>

TokenClass::TokenClass(){
  mType = VOID_TOKEN;
  mLexeme = "VOID";
}

TokenClass::TokenClass(TokenType type, const std::string & lexeme){
  mType = type;
  mLexeme = lexeme;
}

void TokenClass::CheckReserved(){
  if (mLexeme == "void"){
    mType = VOID_TOKEN;
  }
  else if(mLexeme == "main"){
    mType = MAIN_TOKEN;
  }
  else if(mLexeme == "int"){
    mType = INT_TOKEN;
  }
  else if(mLexeme == "cout"){
    mType = COUT_TOKEN;
  }
  else{
    return;
  }
}

std::ostream& operator<<(std::ostream out, const TokenClass tc){
  std::string T = "type: ";
  std::string N = " Name: ";
  std::string L = " Lexme: ";
  TokenType TT = tc.GetTokenType();
  std::string TN = tc.GetTokenTypeName();
  std::string TL = tc.GetLexeme();
  return out << T << TT << N << TN << L << TL << std::endl;
}

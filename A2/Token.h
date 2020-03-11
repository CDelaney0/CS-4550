#ifndef _TOKEN_H_
#define _TOKEN_H_
#include <cstdlib>
#include <vector>
#include <iostream>
#include <string>
//#include "debug.h"

enum TokenType {// Reserved Words
	// Reserved Words:
	VOID_TOKEN, MAIN_TOKEN, INT_TOKEN, COUT_TOKEN,
	// Relational Operators:
	LESS_TOKEN, LESSEQUAL_TOKEN, GREATER_TOKEN, GREATEREQUAL_TOKEN,
	EQUAL_TOKEN, NOTEQUAL_TOKEN,
	// Other Operators:
	INSERTION_TOKEN, ASSIGNMENT_TOKEN, PLUS_TOKEN, MINUS_TOKEN,
	TIMES_TOKEN, DIVIDE_TOKEN,
	// Other Characters:
	SEMICOLON_TOKEN, LPAREN_TOKEN, RPAREN_TOKEN, LCURLY_TOKEN,
	RCURLY_TOKEN,
	// Other Token Types:
	IDENTIFIER_TOKEN, INTEGER_TOKEN,
	BAD_TOKEN, ENDFILE_TOKEN
};

//keep consastent with list above
const std::string gTokenTypeNames[] = {
 	"VOID", "MAIN", "INT", "COUT",
	"LESS", "LESSEQUAL", "GREATER", "GREATEREQUAL", "EQUAL",
	"NOTEQUAL",
	"INSERTION", "ASSIGNMENT", "PLUS", "MINUS", "TIMES", "DIVIDE",
	"SEMICOLON", "LPAREN", "RPAREN", "LCURLY", "RCURLY",
	"IDENTIFIER","INTEGER",
	"BAD", "ENDFILE"
};
class TokenClass
{
private:
  TokenType mType;
  string mLexeme;
public:
  Token();
  Token(TokenType type, const string &amp; lexeme);
  TokenType GetTokenType() const { return mType; }
  const string &amp; GetTokenTypeName() const { return gTokenTypeNames[mType]; }
  string GetLexeme() const { return mLexeme; }
  void CheckReserved();
  static const string &amp; GetTokenTypeName(TokenType type) { return gTokenTypeNames[type]; }
};
std::ostream &operator << (std::ostream & out, const Token & tok); 
#endif


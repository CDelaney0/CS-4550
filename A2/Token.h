#ifndef _TOKEN_H_
#define _TOKEN_H_
#include <cstdlib>
#include <vector>
#include <iostream>
#include <string>
#include "debug.h"

enum TokenType {// Reserved Words
	VOID_TOKEN, MAIN_TOKEN, INT_TOKEN, COUT_TOKEN,
	// Relational Operators:
	LESS_TOKEN, LESSEQUAL_TOKEN, GREATER_TOKEN, GREATEREQUAL_TOKEN, EQUAL_TOKEN, NOTEQUAL_TOKEN, NOT_TOKEN,
	// Other Operators:
	INSERTION_TOKEN, ASSIGNMENT_TOKEN, PLUS_TOKEN, INC_TOKEN, DEC_TOKEN, PLUSEQUAL_TOKEN, MINUS_TOKEN, MINUSEQUAL_TOKEN, TIMES_TOKEN, 
	TIMESEQUAL_TOKEN, DIVIDE_TOKEN, DIVIDEEQUAL_TOKEN, MODULUS_TOKEN, ENDL_TOKEN,
	// Other Characters:
	SEMICOLON_TOKEN, LPAREN_TOKEN, RPAREN_TOKEN, LCURLY_TOKEN, RCURLY_TOKEN,
	// Other Token Types:
	IDENTIFIER_TOKEN, INTEGER_TOKEN, IF_TOKEN, ELSE_TOKEN, DO_TOKEN, WHILE_TOKEN, AND_TOKEN, OR_TOKEN, STRING_TOKEN, WORD_TOKEN, REPEAT_TOKEN,
	BAD_TOKEN, ENDFILE_TOKEN
};

//keep consastent with list above
const std::string gTokenTypeNames[] = {
  //reserved words
	"VOID", "MAIN", "INT", "COUT",
  //relational operators
	"LESS", "LESSEQUAL", "GREATER", "GREATEREQUAL", "EQUAL", "NOTEQUAL", "NOT",
  //other operators
	"INSERTION", "ASSIGNMENT", "PLUS", "INC", "DEC", "PLUSEQUAL", "MINUS", "MINUSEQUAL", "TIMES",
	"TIMESEQUAL", "DIVIDE", "DIVIDEEQUAL", "MODULUS", "endl",
  //other characters
	"SEMICOLON", "LPAREN", "RPAREN", "LCURLY", "RCURLY",
  //other token types
	"IDENTIFIER", "INTEGER", "IF", "ELSE","DO","WHILE", "AND", "OR", "STRING", "WORD", "REPEAT",
	"BAD", "ENDFILE"
};
class TokenClass
{
private:
  TokenType mType;
  string mLexeme;
public:
  TokenClass();
  TokenClass(TokenType type, const string &amp; lexeme);
  TokenType GetTokenType() const { return mType; }
  const string &amp; GetTokenTypeName() const { return gTokenTypeNames[mType]; }
  string GetLexeme() const { return mLexeme; }
  void CheckReserved();
  static const string &amp; GetTokenTypeName(TokenType type) { return gTokenTypeNames[type]; }
};
std::ostream &operator << (std::ostream & out, const Token & tok); 
#endif


#include "Token.h"

Token::Token() {
};
Token::Token(TokenType type, const std::string &lexeme) 
	:mType(type), mLexeme(lexeme)
{
}
void Token::CheckReserved() {
	if (mLexeme == "void") {
		mType = VOID_TOKEN;
	}
	if (mLexeme == "main") {
		mType = MAIN_TOKEN;
	}
	if (mLexeme == "int") {
		mType = INT_TOKEN;
	}
	if (mLexeme == "cout") {
		mType = COUT_TOKEN;
	}
}

std::ostream &operator << (std::ostream & out, const Token & tok) { std::cout << tok.GetTokenType(); return out; };

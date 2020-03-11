#include "token.h"

Token::Token() {
};
Token::Token(TokenType type, const std::string &lexeme) 
	:mType(type), mLexeme(lexeme)
{
}

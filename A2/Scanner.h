 
#ifndef Scanner
#define Scanner
#include "StateMachine.h"
#include "Token.h"
#include <iostream>
#include <fstream>

class Scanner {
public:
	Scanner(std::string input);
	~Scanner();
	Token GetNextToken();

private:
	std::ifstream mFin;
};
#endif

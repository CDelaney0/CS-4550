#include "Scanner.h"

ScannerClass::ScannerClass(std::string current){
  
}

ScannerClass::~Scanner() {
	mFin.close();
}

Token ScannerClass::GetNextToken() {
  StateMachine stateMachine;
	MachineState state = START_STATE;
	TokenType type;
	std::string lex;
	char in;
	do {
		in = mFin.get();
		if (in == '\n') { mLineNumber += 1; }
		lex += in;
		state = stateMachine.UpdateState(in, type);
		if (state == START_STATE || state == ENDFILE_STATE) { lex = ""; }
	} while (state != CANTMOVE_STATE);
	if (lex.length() != 1) lex.erase(lex.size() - 1);
	Token tok = Token(type, lex);
	tok.CheckReserved();
	if (in == '\n') { return tok; }
	else { mFin.unget(); }
	return tok;
}

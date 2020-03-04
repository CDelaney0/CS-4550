#include "token.h"
#ifndef STATEMACHINE
#define STATEMACHINE

enum MachineState {
  START_STATE, IDENTIFIER_STATE, INTEGER_STATE, CANTMOVE_STATE, LAST_STATE
};

enum CharacterType {
  LETTER_CHAR, DIGIT_CHAR, WHITESPACE_CHAR, PLUS_CHAR, BAD_CHAR, LAST_CHAR,
};

class StateMachineClass{
  public:
    StateMachineClass();
    
    MachineState UpdateState(char currentCharacter, TokenType & correspondingTokenType);
  private:
    MachineState mCurrentState;

    //the matrix of legale moves:
    MachineState mLegalMoves[LAST_STATE][LAST_CHAR];

    //which end-machine-states correspond to which token types.
    // (non end states correspond to the BAD_TOKEN token type)
    TokenType mCorrespondingTokenTypes[LAST_STATE];
}

#endif

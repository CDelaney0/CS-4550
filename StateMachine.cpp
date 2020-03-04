#include "StateMachine.h"
#include "token.h"

StateMachineClass::StateMachineClass(){
  //set currentstate to start
  mCurrentState = START_STATE;

  //set all legal moves to illegal
  for(int i=0; i<LAST_STATE;i++){
    for(int j=0; j<LAST_CHAR;j++){
      mLegalMoves[i][j] = CANTMOVE_STATE;
    }
  }

  //set all states to bad
  for(int i=0; i<LAST_STATE;i++){
    mCorrespondingTokenTypes[i] = BAD_TOKEN;
  }
  mCorrespondingTokenTypes[IDENTIFIER_STATE]=IDENTIFIER_TOKEN;
  mCorrespondingTokenTypes[INTEGER_STATE]=INTEGER_TOKEN;

}

MachineState StateMachineClass::UpdateState(char currentCharacter, TokenType& correspondingTokenType){
  //conver the input character into a input character type
  CharacterType charType = BAD_CHAR;

  if(isdigit(currentCharacter)){
    charType = DIGIT_CHAR;
  }
  if(isalpha(currentCharacter)){
    charType = LETTER_CHAR;
  }
  if(isspace(currentCharacter)){
    charType = WHITESPACE_CHAR;
  }
  if(isdigit(currentCharacter)){
    charType = DIGIT_CHAR;
  }
  if(currentCharacter == '+'){
    charType = PLUS_CHAR;
  }

  correspondingTokenType = mCorrespondingTokenTypes[mCurrentState];
  mCurrentState = mLegalMoves[mCurrentState][charType];
  return mCurrentState;
}

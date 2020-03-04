#include "Parser.h"

ParserClass::Start(){

  //Start → Program ENDFILE
  
// Program → VOID MAIN LPAREN RPAREN Block

// Block → LCURLY StatementGroup RCURLY

// StatementGroup → {empty}

// StatementGroup → DeclarationStatement StatementGroup

// StatementGroup → AssignmentStatement StatementGroup

// StatementGroup → CoutStatement StatementGroup

// StatementGroup → Block StatementGroup

// DeclarationStatement → INT Identifier SEMICOLON

// AssignmentStatement → Identifier ASSIGNMENT Expression

SEMICOLON

// CoutStatement → COUT INSERTION Expression SEMICOLON

}
// Expression - Relational
// Relational - PlusMinus RelationalTail
// RelationalTail - LESS_TOKEN PlusMinus
// RelationalTail - LESSEQUAL_TOKEN PlusMinus
// RelationalTail - GREATER_TOKEN PlusMinus
// RelationalTail - GREATEREQUAL_TOKEN PlusMinus
// RelationalTail - EQUAL_TOKEN PlusMinus
// RelationalTail - NOTEQUAL_TOKEN PlusMinus
// RelationalTail - {empty}
// PlusMinus - TimesDivide PlusMinusTail
// PlusMinusTail - PLUS_TOKEN TimesDivide PlusMinusTail
// PlusMinusTail - MINUS_TOKEN TimesDivide PlusMinusTail
// PlusMinusTail - {empty}
// TimesDivide - Factor TimesDivideTail
// TimesDivideTail - TIMES_TOKEN Factor TimesDivideTail
// TimesDivideTail - DIVIDE_TOKEN Factor TimesDivideTail
// TimesDivideTail - {empty}
// Factor → Identifier
// Factor → Integer
// Factor → LPAREN_TOKEN Expression RPAREN_TOKEN
// Identifier → IDENTIFIER_TOKEN
// Integer → INTEGER_TOKEN

// Start → Program ENDFILE
// Program → VOID MAIN LPAREN RPAREN Block
// Block → LCURLY StatementGroup RCURLY
// StatementGroup → {empty}
// StatementGroup → DeclarationStatement StatementGroup
// StatementGroup → AssignmentStatement StatementGroup
// StatementGroup → CoutStatement StatementGroup
// StatementGroup → Block StatementGroup
// DeclarationStatement → INT Identifier SEMICOLON
// AssignmentStatement → Identifier ASSIGNMENT Expression

SEMICOLON

// CoutStatement → COUT INSERTION Expression SEMICOLON

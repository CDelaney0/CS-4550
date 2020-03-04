#ifndef Node
#define Node

class Node:{
  ~Node() //destructor
};

class StartNode:Node;{
  StartNode(ProgramNode*);
  ~StartNode();{PN->delete()}
  private:
  ProgramNode* PN;
};

class ProgramNode:Node;{
  ProgramNode(BlockNode);
  ~ProgramNode();{BL->delete()}
  private:
  BlockNode* BL;
};

class BlockNode:StatementNode;{
  BlockNode(StatementGroupNode);
  ~BlockNode();{SGN->delete()}
  private:
  StatementGroupNode* SGN;
};

class StatementGroupNode:Node;{
  
  void AddStatement(StatementNode*);
  ~StatementGroupNode();
  private:
  std::vector<StatementNode*> SNvector;
};

class StatementNode:Node;{

};

class DeclarationStatementNode:StatementNode;{
  DeclarationStatementNode(IdentifierNode*);
  ~DeclarationStatementNode();{IN->delete()}
  private:
  IdentifierNode* IN;
};

class AssignmentStatementNode:StatementNode;{
  AssignmentStatementNode(IdentifierNode*,ExpressionNode*);
  ~AssignmentStatementNode();{IN->delete() and EN->delete()}
  private:
  IdentifierNode* IN;
  ExpressionNode* EN;
};

class CoutStatementNode:StatementNode;{
  CoutStatementNode(ExpressionNode*);
  ~CoutStatementNode();{EN->delete()}
  private:
  ExpressionNode* EN;
};

class ExpressionNode{
  virtual int Evaluate();
  virtual ~ExpressionNode();
};

class IntegerNode:ExpressionNode;{
  int IntegerNode(I);
  private:
  int I;
};

class IdentifierNode:ExpressionNode{
  IdentifierNode(std::string,SymbolTable*)
  DeclareVariable();
  SetValue(int v);
  GetIndex();
  private:
  std::string label;
  SymbolTable* ST;

};

class BinaryOperatorNode:ExpressionNode;{
  BinaryOperatorNode(ExpressionNode*,ExpressionNode*);
  ~BinaryOperatorNode();
  private:
  ExpressionNode* EN1;
  ExpressionNode* EN2;
};

class PlusNode:BinaryOperatorNode;{
  PlusNode(ExpressionNode*,ExpressionNode*)
};

class MinusNode:BinaryOperatorNode;{
  MinusNode(ExpressionNode*,ExpressionNode*)
};

class TimesNode:BinaryOperatorNode;{
  TimesNode(ExpressionNode*,ExpressionNode*)
};

class DivideNode:BinaryOperatorNode;{
  DivideNode(ExpressionNode*,ExpressionNode*)
};

class LessNode{}
class LessEqualNode{}
class GreaterNode{}
class GreaterEqualNode{}
class EqualNode{}
class NotEqualNode{}

#endif

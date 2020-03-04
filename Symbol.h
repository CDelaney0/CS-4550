#include "token.h"
#ifndef Symbol
#define Symbol

class SymbolTableClass{
  public:
  bool Exists(const std::string &amp; s);
void AddEntry(const std::string &amp; s);
int GetValue(const std::string &amp; s);
void SetValue(const std::string &amp; s, int v);
int GetIndex(const std::string &amp; s);
int GetCount();

struct Variable(string mLabel,int mValue);
vector SymbolVector<Variable>;
}

#endif

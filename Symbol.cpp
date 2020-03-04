#include "Symbol.h"

SymbolTableClass::Exists(const std::string& s){
  int i = SymbolVector.length();
  int j = 0;
  for (; j < i;j++){
    if (s == SymbolVector[j].mLabel){
      return true;
      }//gets a variable from the vector
  }
  return false;
}
SymbolTableClass::AddEntry(const std::string& s){
  if (Exists(s) == false){
    return;
  }
  SymbolVector.append(Variable[s,0]
  return;

}
SymbolTableClass::GetValue(const std::string& s){
  if (Exists(s) == false){
    std::cout << "the symbol you tried to get is not recorded" << std::endl;
    return;
  }
  for(j=0;j < SymbolVector.length();j++){
    if (s == SymbolVector[j].mLabel){
      return SymbolVector[j].mValue;
    }
  }

}
SymbolTableClass::SetValue(const std::string& s, int v){
  if (Exists(s)==false){
    std::cout << "the symbol you tried to get is not recorded" << std::endl;
    return;
  }
  for(j=0;j < SymbolVector.length();j++){
    if (s == SymbolVector[j].mLabel){
      SymbolVector[j].mValue = v;
      return;
    }
  }
}
SymbolTableClass::GetIndex(const std::string& s){
  if (Exists(s)==false){
    return -1;
  }
  for(j=0;j < SymbolVector.length();j++){
    if (s == SymbolVector[j].mLabel){
      return j;
    }
  }

}
SymbolTableClass::GetCount(){
  return SymbolVector.size();
}

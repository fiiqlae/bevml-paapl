#pragma once
#include <string>
#include "./formula.cpp"

class Drug
{
protected:
  std::string _name;
  Formula _formula;
public:
  Drug(std::string name, Formula formula):
    _name(name), _formula(formula) {};
  
  Drug():
    _name("undefined"), _formula(Formula()) {};
  
  void change_name(std::string new_name)
  {
    _name = new_name;
  }
};

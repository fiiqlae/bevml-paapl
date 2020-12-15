#pragma once

#include <string>

class Formula
{
private:
  int _addictiveness;
  std::string _formula;
public:

  Formula():
    _addictiveness(0), _formula("tmos") {};

  Formula(int addictiveness, std::string body):
    _addictiveness(addictiveness), _formula(body) {};

  int get_addictiveness()
  {
    return _addictiveness;
  }

  std::string get_formula()
  {
    return _formula;
  }
};

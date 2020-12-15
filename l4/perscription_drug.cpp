#pragma once

#include "./drug.cpp"
#include "./formula.cpp"
#include <iostream>

class PerscriptionDrug : public Drug
{
private:
  int _price;
  bool _can_make_crack_with_it;

public:

  PerscriptionDrug():
    _price(0), _can_make_crack_with_it(true) {};
  
  PerscriptionDrug(int price, bool crack):
    _price(price), _can_make_crack_with_it(crack) {};
  
  int get_price()
  {
    return _price;
  }

  bool can_make_crack_with_it()
  {
    return _can_make_crack_with_it;
  }

  friend std::ostream& operator<< (std::ostream& os, PerscriptionDrug& r)
  {
    os << "Perscription Drug : \n"
      << "TITLE              : " << r._name << "\n"
      << "FORMULA            : " << r._formula.get_formula() << "\n"
      << "ADDICTIVENESS      : " << r._formula.get_addictiveness() << "\n"
      << "PRICE              : " << r._price << "\n"
      << "DO ADDICTS WANT IT : " << r._can_make_crack_with_it << "\n";
    return os;
  }

  friend std::istream& operator>> (std::istream& is, PerscriptionDrug& r)
  {
    std::string name;
    int addictiveness; 
    int price;
    std::string formula;
    std::string crack;
    std::cout << "PerscriptionDrug input: \n";
    std::cout << "TITLE                   : "; 
      is >> name;
    std::cout << "ADDICTIVENESS           : ";
      is >> addictiveness;
    std::cout << "FORMULA                 : ";
      is >> formula;
    std::cout << "PRICE                   : ";
      is >> price;
    std::cout << "DO ADDICTS WANT IT [y/n]: ";
      is >> crack;
    
    r._name = name;
    r._price = price;
    r._can_make_crack_with_it = crack == "y";
    r._formula = Formula(addictiveness, formula);
    return is;
  }
};

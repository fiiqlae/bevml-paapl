#include "./PerscriptionDrug.hpp"
#include <iostream>
#include <chrono>
#include <stdlib.h>
#include <time.h>

PerscriptionDrug::PerscriptionDrug(): 
    _id(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count()),
    _name("eyesandin"), 
    _formula("tetramethyl ortosilicate"), 
    _price(164) {};

PerscriptionDrug::PerscriptionDrug(std::string name, std::string formula, int price)
{
    _id = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    _name = name;
    _formula = formula;
    _price = price;
}

PerscriptionDrug::PerscriptionDrug(const PerscriptionDrug &e):
    _id(e._id),
    _name(e._name), 
    _formula(e._formula), 
    _price(e._price) {};

bool PerscriptionDrug::operator== (const PerscriptionDrug& e) {
    return this->_id == e._id;
}

std::ostream& operator<< (std::ostream& os, PerscriptionDrug& e) {
    os << "Perscription Drug summary: \n" 
       << "TITLE  : " << e._name << std::endl
       << "FORMULA: " << e._formula << std::endl
       << "PRICE  : " << e._price << std::endl
       << "ID     : " << e._id << std::endl;
    return os;
}

std::istream& operator>> (std::istream& is, PerscriptionDrug& e) {
    std::string name;
    std::string formula;
    int price;
    std::cout << "TITLE   > ";
        is >> name;
    std::cout << "FORMULA > ";
        is >> formula;
    std::cout << "PRICE   > ";
        is >> price;
    e._name = name;
    e._formula = formula;
    e._price = price;
    return is;
}

std::string PerscriptionDrug::get_name()
{
    return this->_name;
}

std::string PerscriptionDrug::get_formula()
{
    return this->_formula;
}

int PerscriptionDrug::get_price()
{
    return this->_price;
}

long PerscriptionDrug::get_id()
{
    return this->_id;
}

void PerscriptionDrug::set_price(int v)
{
    this->_price = v;
}
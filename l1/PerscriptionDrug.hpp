#pragma once
#include <iostream>
#include <string>

class PerscriptionDrug
{
private:
    long _id;
    std::string _name;
    std::string _formula;
    int _price;
public:
    PerscriptionDrug();
    PerscriptionDrug(std::string _name, std::string _formula, int _price);
    PerscriptionDrug(const PerscriptionDrug &d);

    std::string get_name();
    std::string get_formula();
    int get_price();
    long get_id();

    void set_price(int new_price);

    bool operator == (const PerscriptionDrug &d);
    friend std::ostream& operator<< (std::ostream& os, PerscriptionDrug& t);
    friend std::istream& operator>> (std::istream& is, PerscriptionDrug& t);
};

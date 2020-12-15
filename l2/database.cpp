#include "./perscription_drug.cpp"
#include <vector>
#include <iostream>

class DB
{
private:
  std::vector<PerscriptionDrug> _perscription_drugs;
  int _current_id;
public:
  
  DB(): _current_id(0) {};

  void add()
  {
    PerscriptionDrug r;
    std::cin >> r;
    _perscription_drugs.push_back(r);
  }

  void update()
  {
    int selection;
    PerscriptionDrug r;
    std::cout << "Enter the ID: ";
    std::cin >> selection;
    r = _perscription_drugs[selection];
    std::cout << r;
    std::cin >> r;
    _perscription_drugs[selection] = r;
  }
  
  void get()
  {
    int selection;
    PerscriptionDrug r;
    std::cout << "Enter the ID: ";
    std::cin >> selection;
    r = _perscription_drugs[selection];
    std::cout << r;
  }

  void delete_record()
  {
    int selection;
    std::cout << "Enter the ID: ";
    std::cin >> selection;
    _perscription_drugs[selection] = _perscription_drugs.back();
    _perscription_drugs.pop_back();
  }

  void print_all()
  {
    for(int i = 0; i < _perscription_drugs.size(); i++) 
    {
      std::cout << i << " " << _perscription_drugs[i];
    }
  }

};

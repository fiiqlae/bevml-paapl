#include <iostream>
#include "ll.cpp"
#include "lli.cpp"
#include "./perscription_drug.cpp"

void print_menu()
{
  std::cout << "select an option: \n" 
    << "1 -- puch front \n"
    << "2 -- push back \n"
    << "3 -- print \n"
    << "4 -- clear \n";
}

int main() 
{
    LinkedList<PerscriptionDrug> list;
    
    int selection = 0;
    PerscriptionDrug r;
    while(1)
    {
      print_menu();
      std::cin >> selection;
      switch(selection)
      {
        case(1):
        {
          std::cin >> r;
          list.push_front(r);
          break;
        }
        case(2):
        {
          std::cin >> r;
          list.push_back(r);
          break;
        }
        case(3):
        {
          list.print();
          break;
        }
        case(4):
        {
          list.clear();
          break;
        }
        default:
          break;
      }
      selection = 0;
    }
    return 0;    
}

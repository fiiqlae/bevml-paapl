#include "./file_manager.cpp"
#include "./perscription_drug.cpp"

#include <iostream>

void print_menu()
{
  std::cout << "select an option: \n" 
    << "1 -- write object\n"
    << "2 -- read an object\n"
    << "3 -- print expected\n";
}

int main() 
{
  int selection = 0;
  PerscriptionDrug r, buffer;
  FileManager<PerscriptionDrug> fm("A.bin");
  while(1)
  {
    print_menu();
    std::cin >> selection;
    switch(selection)
    {
      case(1):
      {
        std::cin >> r;
        buffer = r;
        fm.write_object(r);
        break;
      }
      case(2):
      {
        r = fm.read_object();
        std::cout << r;
        break;
      }
      case(3):
      {
        std::cout << buffer;
        break;
      }
      default:
        break;
    }
    selection = 0;
  }
  return 0;    
}


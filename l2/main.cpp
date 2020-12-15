#include <iostream>

#include "./database.cpp"
#include "./perscription_drug.cpp"

void print_menu() {
  std::cout << "1 -- add" 
         << std::endl << "2 -- alter by id" 
         << std::endl << "3 -- select * from drugs" 
         << std::endl << "4 -- delete from drugs"
         << std::endl;
}

int main() {
  DB db;
  int selection = 0;
  while(1) {
    std::cout << "choose an option: " << std::endl;
    print_menu();
    std::cin >> selection;
    switch (selection) {
      case 1: {
        db.add();  
        break;
      }
      case 2: {
        db.update();
        break;
      }
      case 3:
        db.print_all();
        break;
      case 4:
        db.delete_record();
        break;
      default:
        break;
    }
    selection = 0;
    std::cout << "continuing\n\n";
  }
  return 0;
}

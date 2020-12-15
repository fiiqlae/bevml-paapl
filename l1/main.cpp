#include "./PerscriptionDrug.hpp"
#include "./DataManager.hpp"

#include "./PerscriptionDrug.cpp"
#include "./DataManager.cpp"

#include <iostream>
#include <chrono>
#include <stdlib.h>
#include <time.h>

using namespace std;

void print_menu() {
    cout << "1 -- add" 
         << endl << "2 -- alter by id" 
         << endl << "3 -- select * from Perscripion Drugs" 
         << endl << "4 -- sort by id" 
         << endl << "5 -- sort by value"
         << endl << "6 -- delete from Perscripion Drugs"
         << endl;
}

int main() {
    srand(time(NULL));
    DataManager DataManager;
    int selection = 0;
    while(1) {
        cout << "what are we doing?" << endl;
        print_menu();
        cin >> selection;
        switch (selection) {
            case 1: {
                cout << "PerscriptionDrug: " << endl;
                PerscriptionDrug d;
                cout << d.get_id() << endl;
                cin >> d;
                DataManager.add(d);
                break;
            }
            case 2: {
                long id = 0;
                cin >> id;
                DataManager.update(id);
                break;
            }
            case 3:
                DataManager.print();
                break;
            case 4:
                DataManager.sort_by_id();
                break;
            case 5:
                DataManager.sort_by_name();
                break;
            case 6: {
                cout << "ID: ";
                long id = 0;
                cin >> id;
                DataManager.delete_record(id);
                break;
            }
            default:
                break;
        }
        selection = 0;
    }

    return 0;
}
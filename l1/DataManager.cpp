#include "./DataManager.hpp"

#include "./PerscriptionDrug.hpp"
#include "./PerscriptionDrug.hpp"

#include <iostream>
#include <vector>
#include <algorithm>

#pragma once

bool comp_name(PerscriptionDrug& lhs, PerscriptionDrug& rhs) {
   return (lhs.get_name()) < (rhs.get_name());
}

bool comp_id(PerscriptionDrug& lhs, PerscriptionDrug& rhs) {
   return lhs.get_id() < rhs.get_id();
}

void DataManager::add(PerscriptionDrug& e) {
    PerscriptionDrugs.push_back(e);
}

void DataManager::update(long id) {
    PerscriptionDrug d;
    std::cin >> d;
    for(int i = 0; i < PerscriptionDrugs.size(); i++) {
        if(PerscriptionDrugs[i].get_id() == id) {
            PerscriptionDrugs[i] = PerscriptionDrug(d);
            return;
        }
    }
}

PerscriptionDrug DataManager::get(long id) {
    for(int i = 0; i < PerscriptionDrugs.size(); i++) {
        if(PerscriptionDrugs[i].get_id() == id) {
            return PerscriptionDrugs[i];
        }
    }
}

void DataManager::delete_record(long id) {
    for(int i = 0; i < PerscriptionDrugs.size(); i++) {
        if(PerscriptionDrugs[i].get_id() == id) {
            PerscriptionDrugs[i] = PerscriptionDrugs.back();
            PerscriptionDrugs.pop_back();
            return;
        }
    }
}

void DataManager::sort_by_id() {
    std::sort(PerscriptionDrugs.begin(), PerscriptionDrugs.end(), comp_id);
}

void DataManager::sort_by_name() {
    std::sort(PerscriptionDrugs.begin(), PerscriptionDrugs.end(), comp_name);
}

void DataManager::print() {
    for(auto i = PerscriptionDrugs.begin(); i != PerscriptionDrugs.end(); i++) {
        cout << *(i.base());
    }
}
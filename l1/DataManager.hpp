#include "./PerscriptionDrug.hpp"
#include "./PerscriptionDrug.hpp"
#include <vector>

#pragma once

using namespace std;

class DataManager {
    vector<PerscriptionDrug> PerscriptionDrugs;
public:
    void add(PerscriptionDrug& t);
    void update(long id);
    PerscriptionDrug get(long id);
    void delete_record(long id);
    void print();
    void sort_by_id();
    void sort_by_name();
};
#pragma once
#include <string>
#include "Bicycle.h"
#define MAX_BICYCLE 1000
using namespace std;

class BicycleCollection {
private:
    Bicycle* BicycleList[MAX_BICYCLE];
public:
    BicycleCollection();
    void registerBicycle(const string& id, const string& productName);
    Bicycle* findBicycleById(const string& id);
    vector<Bicycle*> getAllBicycles(); // 모든 멤버 반환
};
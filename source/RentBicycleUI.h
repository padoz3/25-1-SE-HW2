#pragma once
#include <string>
#include "RentBicycle.h"
#include "BicycleCollection.h"
#include "MemberSession.h"
using namespace std;

class RentBicycleUI {
private:
    RentBicycle rentBicycle;
    string bicycleId;
    MemberSession session;
    BicycleCollection collection;

public:
    RentBicycleUI(BicycleCollection* collection, MemberSession* session); 
    void startInterface();
    void rentBicycleById(const string& input);
};

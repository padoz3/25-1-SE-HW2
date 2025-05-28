#pragma once
#include <vector>
#include <fstream>
#include "MemberSession.h"
#include "BicycleCollection.h"
#include "Bicycle.h"
using namespace std;

class CheckRentalInfoUI;

class CheckRentalInfo {
private:
    MemberSession& session;
    CheckRentalInfoUI* ui;

public:
    CheckRentalInfo(MemberSession& session);
    CheckRentalInfoUI* getUI();
    vector<Bicycle*> getRentedBicycles();
};

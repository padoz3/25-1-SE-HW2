#pragma once
#include <string>
#include "MemberSession.h"
#include "BicycleCollection.h"
using namespace std;

class RentBicycle {
private:
    MemberSession& session;
    BicycleCollection& collection;

public:
    RentBicycle(BicycleCollection* collection, MemberSession* session);
    string rent(const string& id);
};
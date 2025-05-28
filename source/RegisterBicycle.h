#pragma once
#include <string>
#include "MemberSession.h"
#include "BicycleCollection.h"
using namespace std;

class RegisterBicycle {
private:
    MemberSession& session;
    BicycleCollection& collection;

public:
    RegisterBicycle(BicycleCollection& collection, MemberSession& session);
    string registerBicycle(const string& id, const string& name);
};
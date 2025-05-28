#pragma once
#include <string>
#include "RegisterBicycle.h"
#include "BicycleCollection.h"
#include "MemberSession.h"
using namespace std;

class RegisterBicycleUI {
private:
    RegisterBicycle registerBicycle;  // SignUp과 동일한 방식: 내부 객체 보유
    BicycleCollection& bicycleCollection;
    MemberSession& memberSession;

public:
    RegisterBicycleUI();
    void startInterface();
    void registerWithBicycleInfo(const string& input);
};
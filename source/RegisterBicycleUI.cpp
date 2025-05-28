#include "RegisterBicycleUI.h"
#include <sstream>
#include <fstream>
extern ofstream out_fp;

BicycleCollection collection;
MemberSession session;
RegisterBicycleUI::RegisterBicycleUI() : registerBicycle(collection, session) {}

void RegisterBicycleUI::startInterface() {
    out_fp << "3.1. 자전거 등록" << endl;
}

void RegisterBicycleUI::registerWithBicycleInfo(const string& input) {
    istringstream iss(input);
    string id, name;
    iss >> id >> name;

    string result = registerBicycle.registerBicycle(id, name);
    out_fp << "> " << result;
}
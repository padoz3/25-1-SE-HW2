#include "RentBicycleUI.h"
#include <sstream>
#include <fstream>
extern ofstream out_fp;

RentBicycleUI::RentBicycleUI(BicycleCollection* collection, MemberSession* session)
    : rentBicycle(collection, session) {} // ← 포인터 기반 RentBicycle 생성자 호출

void RentBicycleUI::startInterface() {
    out_fp << "4.1. 자전거 대여" << endl;
}

void RentBicycleUI::rentBicycleById(const string& input) {
    istringstream iss(input);
    string id;
    iss >> id;

    string result = rentBicycle.rent(id);
    out_fp << "> " << result;
}

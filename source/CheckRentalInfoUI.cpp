#include "CheckRentalInfoUI.h"
#include <algorithm>
extern ofstream out_fp;

CheckRentalInfoUI::CheckRentalInfoUI(CheckRentalInfo& control)
    : control(control), out_fp(::out_fp) {}

void CheckRentalInfoUI::displayRentalInfo() {
    vector<Bicycle*> list = control.getRentedBicycles();
    sort(list.begin(), list.end(), [](Bicycle* a, Bicycle* b) {
        return a->getId() < b->getId();
    });

    out_fp << "5.1. 자전거 대여 리스트" << endl;
    for (Bicycle* b : list) {
        out_fp << "> " << b->getBicycleDetails() << endl;
    }
}

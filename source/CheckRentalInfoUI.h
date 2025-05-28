#pragma once
#include <vector>
#include <fstream>
#include "CheckRentalInfo.h"
#include "Bicycle.h"
using namespace std;

class CheckRentalInfoUI {
private:
    CheckRentalInfo& control;
    ofstream& out_fp;

public:
    CheckRentalInfoUI(CheckRentalInfo& control);
    void displayRentalInfo();
};
#pragma once
#include <fstream>
#include "ShutDown.h"
using namespace std;

class ShutDown;

class ShutDownUI {
private:
    ifstream& in_fp;
    ofstream& out_fp;
    ShutDown* control;

public:
    ShutDownUI(ifstream& in_fp, ofstream& out_fp);
    void startInterface(ShutDown* control);
    void exitProgram();
};
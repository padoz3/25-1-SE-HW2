#pragma once
#include <fstream>
using namespace std;

class ShutDownUI;

class ShutDown {
private:
    ifstream& in_fp;
    ofstream& out_fp;
    ShutDownUI* ui;

public:
    ShutDown(ifstream& in_fp, ofstream& out_fp);
    ShutDownUI* getUI();
};
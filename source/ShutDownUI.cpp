#include "ShutDownUI.h"
#include "ShutDown.h"

ShutDownUI::ShutDownUI(ifstream& in_fp, ofstream& out_fp)
    : in_fp(in_fp), out_fp(out_fp) {}

void ShutDownUI::startInterface(ShutDown* control) {
    this->control = control;
}

void ShutDownUI::exitProgram() {
    out_fp << "6.1. 종료" << endl;
}
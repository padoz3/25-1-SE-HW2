#include "ShutDown.h"
#include "ShutDownUI.h"

ShutDown::ShutDown(ifstream& in_fp, ofstream& out_fp)
    : in_fp(in_fp), out_fp(out_fp) {
    ui = new ShutDownUI(in_fp, out_fp);
}
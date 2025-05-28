#pragma once
#include <fstream>
#include "MemberSession.h"
using namespace std;

class SignOutUI {
private:
    MemberSession& session;
    ofstream& out_fp;

public:
    SignOutUI(MemberSession& session, ofstream& out_fp);
    void signOut();
};
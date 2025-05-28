#pragma once
#include "MemberSession.h"
using namespace std;

class SignOut {
private:
    MemberSession& session;

public:
    SignOut(MemberSession& session);
    Member* signOut();
};
#pragma once
#include <string>
#include "MemberCollection.h"
#include "MemberSession.h"
using namespace std;

class SignIn {
private:
    MemberCollection& memberCollection;
    MemberSession& session;

public:
    SignIn(MemberCollection& memberCollection, MemberSession& session);
    bool verifyAndSetSession(const string& id, const string& password);
};
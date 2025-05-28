#pragma once
#include <string>
#include "MemberCollection.h"
#include "MemberSession.h"
using namespace std;

class SignInUI {
private:
    string id;
    string password;
    MemberCollection& memberCollection;
    MemberSession& memberSession;

public:
    SignInUI(MemberCollection& memberCollection, MemberSession& memberSession);
    void startInterface();
    void SignIn();
};
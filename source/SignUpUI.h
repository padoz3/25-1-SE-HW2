#pragma once
#include <string>
#include "MemberCollection.h"
using namespace std;

class SignUpUI {
private:
    string id;
    string password;
    string phoneNumber;
    MemberCollection* memberCollection;

public:
    SignUpUI(MemberCollection* memberCollection);  // 생성자 정의
    void startInterface();
    void enterSignUpInformation();
};
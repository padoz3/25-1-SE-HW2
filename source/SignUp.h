#pragma once
#include <string>
using namespace std;

class MemberCollection;

class SignUp {
private:
    MemberCollection* memberCollection;

public:
    SignUp(MemberCollection* memberCollection); // 생성자 추가
    tuple<string, string, string> signUp(string memberId, string passWord, string phoneNumber);
};

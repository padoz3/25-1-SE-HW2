#include "SignUpUI.h"
#include "SignUp.h"
#include <fstream>
using namespace std;

extern ifstream in_fp;
extern ofstream out_fp;

SignUpUI::SignUpUI(MemberCollection* memberCollection)
    : memberCollection(memberCollection), id(""), password(""), phoneNumber("") {}

void SignUpUI::startInterface() {
    out_fp << "1.1. 회원가입\n";
}

void SignUpUI::enterSignUpInformation() {
    in_fp >> id >> password >> phoneNumber;

    SignUp signup(memberCollection);
    signup.signUp(id, password, phoneNumber);

    out_fp << "> " << id << " " << password << " " << phoneNumber << "\n";
}

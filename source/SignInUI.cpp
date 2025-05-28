#include "SignInUI.h"
#include <fstream>
using namespace std;
extern ifstream in_fp;
extern ofstream out_fp;

SignInUI::SignInUI(MemberCollection& memberCollection, MemberSession& memberSession)
    : memberCollection(memberCollection), memberSession(memberSession), id(""), password("") {}

void SignInUI::startInterface() {
    in_fp >> id >> password;
}

void SignInUI::SignIn() {
    vector<Member*> members = memberCollection.getAllMembers();
    bool loginSuccess = false;

    for (Member* member : members) {
        if (member != nullptr && member->getId() == id && member->getPassword() == password) {
            memberSession.signIn(member);  // 로그인 시 세션에 등록
            loginSuccess = true;
            break;
        }
    }

    out_fp << "2.1. 로그인" << endl;
    if (loginSuccess) {
        out_fp << "> " << id << " " << password << endl;
    } else {
        out_fp << "> 로그인 실패" << endl;
    }
}
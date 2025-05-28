#include "SignOutUI.h"

SignOutUI::SignOutUI(MemberSession& session, ofstream& out_fp)
    : session(session), out_fp(out_fp) {}

void SignOutUI::signOut() {
    Member* member = session.getCurrentMember();
    session.signIn(nullptr);  // 현재 멤버 초기화 (로그아웃)

    out_fp << "2.2. 로그아웃" << endl;
    if (member != nullptr) {
        out_fp << "> " << member->getId() << endl;
    }
}
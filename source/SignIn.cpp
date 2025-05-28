#include "SignIn.h"
#include "Member.h"

SignIn::SignIn(MemberCollection& memberCollection, MemberSession& session)
    : memberCollection(memberCollection), session(session) {}

bool SignIn::verifyAndSetSession(const string& id, const string& password) {
    vector<Member*> members = memberCollection.getAllMembers();
    for (Member* member : members) {
        if (member != nullptr && member->getId() == id && member->getPassword() == password) {
            session.signIn(member);  // 멤버세션에 현재 멤버 등록
            return true;
        }
    }
    return false;
}

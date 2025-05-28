#include "SignOut.h"

SignOut::SignOut(MemberSession& session)
    : session(session) {}

Member* SignOut::signOut() {
    Member* member = session.getCurrentMember();
    session.signIn(nullptr);
    return member;
}
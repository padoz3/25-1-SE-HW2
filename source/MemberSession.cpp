#include "MemberSession.h"

// 기본 생성자
MemberSession::MemberSession()
    : currentMember(nullptr)
{}

// 로그인
void MemberSession::signIn(Member* member) {
    currentMember = member;
}

// 현재 로그인된 회원 포인터 반환
Member* MemberSession::getCurrentMember() const {
    return currentMember;
}
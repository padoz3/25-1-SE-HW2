#include "Member.h"
#pragma once

class MemberSession {
private:
    Member* currentMember;
public:
    MemberSession();
    void signIn(Member* member); // 로그인: 현재 회원 설정
    Member* getCurrentMember() const; // 현재 회원 정보 반환
};
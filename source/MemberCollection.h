#pragma once
#include "Member.h"
#include <string>
#include <vector>
using namespace std;

#define MAX_MEMBER 1000

class MemberCollection {
private:
    Member* MemberList[MAX_MEMBER];

public:
    MemberCollection(); // 생성자

    void addNewUser(const string& id, const string& password, const string& phoneNumber);
    Member* findMemberById(const string& id);
    vector<Member*> getAllMembers(); // 모든 멤버 반환
};

#include "Member.h"
#include "MemberCollection.h"
#include <string>
#include <algorithm>
using namespace std;

MemberCollection::MemberCollection() {
    for (int i = 0; i < MAX_MEMBER; ++i) {
    MemberList[i] = nullptr;
    }

    MemberList[0] = new Member("admin", "admin", "0");
}

void MemberCollection::addNewUser(const string& id,const string& password, const string& phoneNumber) {
    int insertPos = 0;

    // 첫 번째 빈 공간 위치 탐색
    while (insertPos < MAX_MEMBER && MemberList[insertPos] != nullptr) {
        insertPos++;
    }

    // 빈 공간이 있으면 추가
    if (insertPos < MAX_MEMBER) {
        MemberList[insertPos] = new Member(id, password, phoneNumber);
    }
}

Member* MemberCollection::findMemberById(const string& id) {
    for (int i = 0; i < MAX_MEMBER; i++) {
        if (MemberList[i] != nullptr && MemberList[i]->getId() == id)
            return MemberList[i];
    }
    return nullptr;
}

vector<Member*> MemberCollection::getAllMembers() {
    vector<Member*> result;
    for (int i = 0; i < MAX_MEMBER; i++) {
        if (MemberList[i] != nullptr) {
            result.push_back(MemberList[i]);
        }
    }
    return result;
}

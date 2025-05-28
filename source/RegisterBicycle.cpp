#include "RegisterBicycle.h"
#include "Bicycle.h"

RegisterBicycle::RegisterBicycle(BicycleCollection& collection, MemberSession& session)
    : collection(collection), session(session) {}

string RegisterBicycle::registerBicycle(const string& id, const string& name) {
    Member* member = session.getCurrentMember();
    if (member == nullptr) {
        return "로그인된 사용자가 없습니다.\n";
    }

    int insertPos = 0;
    while (insertPos < 1000 && collection.getAllBicycles()[insertPos] != nullptr) {
        insertPos++;
    }

    if (insertPos < 1000) {
        collection.getAllBicycles()[insertPos] = new Bicycle(id, name);
        return id + " " + name + "\n";
    } else {
        return "자전거 저장 공간이 부족합니다.\n";
    }
}

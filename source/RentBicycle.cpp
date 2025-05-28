#include "RentBicycle.h"
#include "Bicycle.h"

RentBicycle::RentBicycle(BicycleCollection& collection, MemberSession& session)
    : collection(collection), session(session) {}

string RentBicycle::rent(const string& id) {
    Member* member = session.getCurrentMember();
    if (member == nullptr) {
        return "로그인된 사용자가 없습니다.\n";
    }

    Bicycle* target = nullptr;
    for (int i = 0; i < 1000; ++i) {
        Bicycle* b = collection.getAllBicycles()[i];
        if (b != nullptr && b->getId() == id) {
            target = b;
            break;
        }
    }

    if (target == nullptr) {
        return "해당 ID의 자전거를 찾을 수 없습니다.\n";
    }

    member->addRentalInformation(target);
    return target->getId() + " " + target->getProductName() + "\n";
}

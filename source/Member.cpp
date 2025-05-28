#include "Member.h"

Member::Member(const string& id,const string& password, const string& phoneNumber)
    : id(id), password(password), phoneNumber(phoneNumber) {}

void Member::addRentalInformation(Bicycle* bicycle) {
    if (bicycle != nullptr) {
        rentalList.push_back(bicycle);
    }
}

// 대여 목록 조회
vector<Bicycle*> Member::getRentalInformation() const {
    return rentalList;
}
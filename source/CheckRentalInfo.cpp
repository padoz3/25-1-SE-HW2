#include "CheckRentalInfo.h"
#include "CheckRentalInfoUI.h"

CheckRentalInfo::CheckRentalInfo(MemberSession& session)
    : session(session) {
    ui = new CheckRentalInfoUI(*this);
}

CheckRentalInfoUI* CheckRentalInfo::getUI() {
    return ui;
}

vector<Bicycle*> CheckRentalInfo::getRentedBicycles() {
    Member* member = session.getCurrentMember();
    if (member != nullptr) {
        return member->getRentalInformation();
    }
    return {};
}
#include "SignUp.h"
#include "MemberCollection.h"

SignUp::SignUp(MemberCollection* memberCollection) {
    this->memberCollection = memberCollection;
}

tuple<string, string, string> SignUp::signUp(string memberId, string passWord, string phoneNumber) {
    memberCollection->addNewUser(memberId, passWord, phoneNumber);
    return make_tuple(memberId, passWord, phoneNumber);
}
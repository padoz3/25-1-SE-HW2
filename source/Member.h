#pragma once
#include <string>  
#include <vector>
#include "Bicycle.h"
using namespace std;

class Member {
private:
    string id;
    string password;
    string phoneNumber; 
    vector<Bicycle*> rentalList;
    
public:
    // 일반 user 생성자
    Member(const string& id,const string& password, const string& phoneNumber);

    // id 반환
    string getId() const{return id;}

    // pw 반환
    string getPassword() const{return password;}

    // 대여 정보 추가 
    void addRentalInformation(Bicycle* Bicycle);

    // 특정 회원의 자전거 대여 정보 반환
    vector<Bicycle*> getRentalInformation() const;
};
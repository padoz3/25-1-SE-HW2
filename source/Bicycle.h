#pragma once
#include <string>
using namespace std;

class Bicycle {
private:
    string id;
    string productName;

public:
    Bicycle(const string& id, const string& productName);  // 생성자
    string getId() const;
    string getProductName() const;
    string getBicycleDetails() const;
};

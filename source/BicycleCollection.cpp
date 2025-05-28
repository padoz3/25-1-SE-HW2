#include "Bicycle.h"
#include "BicycleCollection.h"
#include <string>
#include <vector>
using namespace std;

// 생성자
BicycleCollection::BicycleCollection() {
    for (int i = 0; i < MAX_BICYCLE; ++i) {
    BicycleList[i] = nullptr;
    }
}

void BicycleCollection::registerBicycle(const string& id, const string& productName) {
    int insertPos = 0;

    // 첫 번째 빈 공간 위치 탐색
    while (insertPos < MAX_BICYCLE && BicycleList[insertPos] != nullptr) {
        insertPos++;
    }

    // 빈 공간이 있으면 추가
    if (insertPos < MAX_BICYCLE) {
        BicycleList[insertPos] = new Bicycle(id, productName);
    }
}

Bicycle* BicycleCollection::findBicycleById(const string& id) {
    for (int i = 0; i < MAX_BICYCLE; i++) {
        if (BicycleList[i] != nullptr && BicycleList[i]->getId() == id)
            return BicycleList[i];
    }
    return nullptr;
}

vector<Bicycle*> BicycleCollection::getAllBicycles() {
    vector<Bicycle*> result;
    for (int i = 0; i < MAX_BICYCLE; i++) {
        if (BicycleList[i] != nullptr) {
            result.push_back(BicycleList[i]);
        }
    }
    return result;
}
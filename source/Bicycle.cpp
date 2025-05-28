#include "Bicycle.h"

Bicycle::Bicycle(const string& id, const string& productName)
    : id(id), productName(productName) {}

string Bicycle::getId() const {
    return id;
}

string Bicycle::getProductName() const {
    return productName;
}

string Bicycle::getBicycleDetails() const {
    return id + " " + productName;
}

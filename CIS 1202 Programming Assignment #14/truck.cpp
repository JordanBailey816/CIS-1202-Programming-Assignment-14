#include "Truck.h"
#include <iostream>
using namespace std;

// Default constructor
Truck::Truck() : Vehicle(), towingCapacity(0) {}

// Parameterized constructor
Truck::Truck(string manufacturer, int yearBuilt, int towingCapacity) : Vehicle(manufacturer, yearBuilt), towingCapacity(towingCapacity) {}

// Getter
int Truck::getTowingCapacity() const {
    return towingCapacity;
}

// Setter
void Truck::setTowingCapacity(int towingCapacity) {
    this->towingCapacity = towingCapacity;
}

// Display info method
void Truck::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Towing Capacity: " << towingCapacity << " lbs" << endl;
}

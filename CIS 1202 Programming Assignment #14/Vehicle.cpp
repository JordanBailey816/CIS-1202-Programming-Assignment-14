#include "Vehicle.h"
#include <iostream>
using namespace std;

// Default constructor
Vehicle::Vehicle() : manufacturer(""), yearBuilt(0) {}

// Parameterized constructor
Vehicle::Vehicle(string manufacturer, int yearBuilt) : manufacturer(manufacturer), yearBuilt(yearBuilt) {}

// Getters
string Vehicle::getManufacturer() const {
    return manufacturer;
}

int Vehicle::getYearBuilt() const {
    return yearBuilt;
}

// Setters
void Vehicle::setManufacturer(string manufacturer) {
    this->manufacturer = manufacturer;
}

void Vehicle::setYearBuilt(int yearBuilt) {
    this->yearBuilt = yearBuilt;
}

// Display info method
void Vehicle::displayInfo() const {
    cout << "Vehicle Information:" << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Year Built: " << yearBuilt << endl;
}

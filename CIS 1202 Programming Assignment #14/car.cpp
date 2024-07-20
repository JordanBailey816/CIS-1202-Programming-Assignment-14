#include "Car.h"
#include <iostream>
using namespace std;

// Default constructor
Car::Car() : Vehicle(), numberOfDoors(0) {}

// Parameterized constructor
Car::Car(string manufacturer, int yearBuilt, int numberOfDoors) : Vehicle(manufacturer, yearBuilt), numberOfDoors(numberOfDoors) {}

// Getter
int Car::getNumberOfDoors() const {
    return numberOfDoors;
}

// Setter
void Car::setNumberOfDoors(int numberOfDoors) {
    this->numberOfDoors = numberOfDoors;
}

// Display info method
void Car::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Number of Doors: " << numberOfDoors << endl;
}

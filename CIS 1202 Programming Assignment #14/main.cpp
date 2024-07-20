// Jordan Bailey
// CIS 1202 101
// 7-14-24

#include <iostream>
#include <string>
#include "Vehicle.h"        // Header files
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {
    string manufacturer;
    int yearBuilt;

    cout << "Vehicle Program" << endl << endl;

    // Vehicle
    cout << "Vehicle:" << endl;
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cin.ignore();

    Vehicle vehicle(manufacturer, yearBuilt);
    vehicle.displayInfo();
    cout << endl;

    // Car
    int numberOfDoors;
    cout << "Car:" << endl;
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cout << "Enter the number of doors: ";
    cin >> numberOfDoors;
    cin.ignore();

    Car car(manufacturer, yearBuilt, numberOfDoors);
    car.displayInfo();
    cout << endl;

    // Truck
    int towingCapacity;
    cout << "Truck:" << endl;
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cout << "Enter the towing capacity: ";
    cin >> towingCapacity;
    cin.ignore();

    Truck truck(manufacturer, yearBuilt, towingCapacity);
    truck.displayInfo();
    cout << endl;

    return 0;
}

#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

// Define member variables for manufacturer and year built
class Vehicle {
private:
    string manufacturer;
    int yearBuilt;

public:
    Vehicle(); 
    Vehicle(string manufacturer, int yearBuilt); 

    // Getter
    string getManufacturer() const;
    int getYearBuilt() const;

    // Setter
    void setManufacturer(string manufacturer);
    void setYearBuilt(int yearBuilt);

    // Define a displayInfo method to display the contents of the object
    virtual void displayInfo() const;
};

#endif // VEHICLE_H


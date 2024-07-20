#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
    int towingCapacity;

public:
    Truck(); // Default constructor
    Truck(string manufacturer, int yearBuilt, int towingCapacity); // Parameterized constructor

    // Getter
    int getTowingCapacity() const;

    // Setter
    void setTowingCapacity(int towingCapacity);

    // Display info method
    void displayInfo() const override;
};

#endif // TRUCK_H


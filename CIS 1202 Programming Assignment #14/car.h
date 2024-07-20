#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    Car(); // Default constructor
    Car(string manufacturer, int yearBuilt, int numberOfDoors); // Parameterized constructor

    // Getter
    int getNumberOfDoors() const;

    // Setter
    void setNumberOfDoors(int numberOfDoors);

    // Display info method
    void displayInfo() const override;
};

#endif // CAR_H


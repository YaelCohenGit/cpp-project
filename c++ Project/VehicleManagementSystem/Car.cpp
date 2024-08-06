#include "Car.h"

namespace VDMS {
    Car::Car(const std::string& vin, const std::string& make, const std::string& model, int year, const std::string& owner, int doors)
        : Vehicle(vin, make, model, year, owner), numDoors(doors) {}

    void Car::displayInfo() const {
        Vehicle::displayInfo();
        std::cout << "Number of doors: " << numDoors << std::endl;
    }

    void Car::performService() const {
        std::cout << "Performing car service for " << getMake() << " " << getModel() << std::endl;
    }
}

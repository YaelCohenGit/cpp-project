#include "Truck.h"

namespace VDMS {
    Truck::Truck(const std::string& vin, const std::string& make, const std::string& model, int year, const std::string& owner, double capacity)
        : Vehicle(vin, make, model, year, owner), loadCapacity(capacity) {}

    void Truck::displayInfo() const {
        Vehicle::displayInfo();
        std::cout << "Load Capacity: " << loadCapacity << " tons" << std::endl;
    }

    void Truck::performService() const {
        std::cout << "Performing truck service for " << getMake() << " " << getModel() << std::endl;
    }
}

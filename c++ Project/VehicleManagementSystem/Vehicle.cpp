#include "Vehicle.h"

namespace VDMS {
    int Vehicle::vehicleCount = 0;

    Vehicle::Vehicle(const std::string& vin, const std::string& make, const std::string& model, int year, const std::string& owner)
        : VIN(vin), make(make), model(model), year(year) {
        ownerName = new std::string(owner);
        vehicleCount++;
    }

    Vehicle::Vehicle(const Vehicle& other)
        : VIN(other.VIN), make(other.make), model(other.model), year(other.year) {
        ownerName = new std::string(*(other.ownerName));
    }

    Vehicle::~Vehicle() {
        delete ownerName;
        vehicleCount--;
    }

    void Vehicle::displayInfo() const {
        std::cout << "VIN: " << VIN << ", Make: " << make << ", Model: " << model << ", Year: " << year << ", Owner: " << *ownerName << std::endl;
    }

    void updateOwnerName(Vehicle& v, const std::string& newName) {
        *(v.ownerName) = newName;
    }
}

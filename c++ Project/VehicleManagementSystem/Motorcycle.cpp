#include "Motorcycle.h"

namespace VDMS {
    Motorcycle::Motorcycle(const std::string& vin, const std::string& make, const std::string& model, int year, const std::string& owner, const std::string& type)
        : Vehicle(vin, make, model, year, owner), type(type) {}

    void Motorcycle::displayInfo() const {
        Vehicle::displayInfo();
        std::cout << "Type: " << type << std::endl;
    }

    void Motorcycle::performService() const {
        std::cout << "Performing motorcycle service for " << getMake() << " " << getModel() << std::endl;
    }
}

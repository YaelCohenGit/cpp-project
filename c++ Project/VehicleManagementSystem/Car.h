#pragma once
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

namespace VDMS {
    class Car : public Vehicle {
    private:
        int numDoors;

    public:
        Car(const std::string& vin, const std::string& make, const std::string& model, int year, const std::string& owner, int doors);
        void displayInfo() const override;
        void performService() const override;
    };
}

#endif

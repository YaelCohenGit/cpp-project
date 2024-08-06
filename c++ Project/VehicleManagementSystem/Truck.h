#pragma once
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

namespace VDMS {
    class Truck : public Vehicle {
    private:
        double loadCapacity;

    public:
        Truck(const std::string& vin, const std::string& make, const std::string& model, int year, const std::string& owner, double capacity);
        void displayInfo() const override;
        void performService() const override;
    };
}

#endif

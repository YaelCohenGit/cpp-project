#pragma once
#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"

namespace VDMS {
    class Motorcycle : public Vehicle {
    private:
        std::string type;

    public:
        Motorcycle(const std::string& vin, const std::string& make, const std::string& model, int year, const std::string& owner, const std::string& type);
        void displayInfo() const override;
        void performService() const override;
    };
}

#endif

#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

namespace VDMS {
    class Vehicle {
    protected:
        std::string VIN;
        std::string make;
        std::string model;
        int year;
        std::string* ownerName;  // Dynamic allocation example

        static int vehicleCount;  // Static data member

    public:
        Vehicle(const std::string& vin, const std::string& make, const std::string& model, int year, const std::string& owner);
        Vehicle(const Vehicle& other); // Copy constructor
        virtual ~Vehicle(); // Destructor

        const std::string& getVIN() const { return VIN; }
        const std::string& getMake() const { return make; }
        const std::string& getModel() const { return model; }
        int getYear() const { return year; }
        const std::string& getOwnerName() const { return *ownerName; }

        virtual void displayInfo() const;

        static int getVehicleCount() { return vehicleCount; }

        friend void updateOwnerName(Vehicle& v, const std::string& newName);

        virtual void performService() const = 0; // Pure virtual function
    };
}

#endif

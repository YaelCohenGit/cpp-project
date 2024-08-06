#pragma once
#ifndef SERVICESTATION_H
#define SERVICESTATION_H

#include "Vehicle.h"
#include <queue>
#include <string>

namespace VDMS {
    enum class ServiceType {
        OilChange,
        Inspection,
        TireRotation
    };

    class ServiceStation {
    private:
        std::queue<std::pair<Vehicle*, ServiceType>> serviceQueue;

    public:
        void addServiceRequest(Vehicle* vehicle, ServiceType serviceType);
        void processServiceRequests();
    };
}

#endif

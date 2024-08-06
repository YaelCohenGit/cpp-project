#include "ServiceStation.h"

namespace VDMS {
    void ServiceStation::addServiceRequest(Vehicle* vehicle, ServiceType serviceType) {
        serviceQueue.push(std::make_pair(vehicle, serviceType));
    }

    void ServiceStation::processServiceRequests() {
        while (!serviceQueue.empty()) {
            auto service = serviceQueue.front();
            serviceQueue.pop();

            std::cout << "Processing service for vehicle VIN: " << service.first->getVIN() << std::endl;
            service.first->performService();

            switch (service.second) {
            case ServiceType::OilChange:
                std::cout << "Service Type: Oil Change" << std::endl;
                break;
            case ServiceType::Inspection:
                std::cout << "Service Type: Inspection" << std::endl;
                break;
            case ServiceType::TireRotation:
                std::cout << "Service Type: Tire Rotation" << std::endl;
                break;
            }
        }
    }
}

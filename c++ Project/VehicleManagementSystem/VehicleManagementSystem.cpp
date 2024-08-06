#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "Motorcycle.h"
#include "ServiceStation.h"

using namespace VDMS;

int main() {
    Car car1("1HGBH41JXMN109186", "Toyota", "Camry", 2020, "Alice", 4);
    Truck truck1("1FDXF46S12EB39965", "Ford", "F-150", 2019, "Bob", 1.5);
    Motorcycle moto1("2HGES267X6H547206", "Harley-Davidson", "Street 750", 2021, "Charlie", "Cruiser");

    car1.displayInfo();
    truck1.displayInfo();
    moto1.displayInfo();

    updateOwnerName(car1, "Alice Johnson");
    car1.displayInfo();

    ServiceStation serviceStation;
    serviceStation.addServiceRequest(&car1, ServiceType::OilChange);
    serviceStation.addServiceRequest(&truck1, ServiceType::Inspection);
    serviceStation.addServiceRequest(&moto1, ServiceType::TireRotation);

    serviceStation.processServiceRequests();

    return 0;
}

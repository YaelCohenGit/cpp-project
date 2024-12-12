
  # Integrated Vehicle Management System (IVMS)

This is an **Advanced C++ project** designed to implement an Integrated Vehicle Management System. The project demonstrates the application of advanced C++ concepts, such as inheritance, polymorphism, operator overloading, memory management, and more, in a real-world simulation of a vehicle dealership and service system.

## Objectives

The project rigorously tests your understanding of:

- Data encapsulation and modular programming.
- Class hierarchies with inheritance and polymorphism.
- Operator overloading and advanced memory management.
- Integration of namespaces and friend functions.
- Real-world complexities in system architecture.

## Features

### Core Functionality
1. **Class Hierarchies**:
   - A base class `Vehicle` with attributes such as:
     - VIN (Vehicle Identification Number)
     - Make
     - Model
     - Year
   - Derived classes (`Car`, `Truck`, `Motorcycle`) with specialized behaviors and attributes.
   
2. **Service Management**:
   - Enum `ServiceType` for service categories:
     - `OilChange`
     - `Inspection`
     - `TireRotation` 

3. **Advanced Features**:
   - Static and dynamic data members.
   - Implementation of constructors, copy constructors, and destructors.
   - Friend functions for enhanced encapsulation and interaction.
   - Inline functions for simple computations.

4. **Namespaces and Memory Management**:
   - Encapsulation of all classes in the namespace `VDMS` (Vehicle Dealership Management System).

5. **Polymorphism**:
   - Virtual functions in the `Vehicle` class overridden in derived classes.
   - Use of interfaces for shared operations across all derived classes.

6. **Complex Interactions**:
   - A `ServiceStation` class for managing service queues and priorities based on type or urgency.
   - Dynamic behavior with polymorphic interactions between vehicle types.

### Comprehensive Main Function
- Dynamic creation of vehicle instances (`Car`, `Truck`, `Motorcycle`).
- Integration of the vehicle dealership and service systems.
- Simulation of services with:
  - Operator overloading for service details.
  - Friend functions for advanced interactions.
  - Polymorphic behavior for vehicle management.

## Project Structure

- **Headers**: `.h` files defining classes, enums, and namespaces.
- **Sources**: `.cpp` files implementing the logic.
- **Main Program**: Demonstrates dynamic behavior, system interactions, and advanced features.

## Contribution

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-name`).
3. Commit your changes (`git commit -am 'Add new feature'`).
4. Push to the branch (`git push origin feature-name`).
5. Create a Pull Request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

This project was developed as part of an advanced C++ coursework assignment to demonstrate integrated system design and real-world problem-solving using C++.



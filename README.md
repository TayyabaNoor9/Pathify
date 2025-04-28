# Pathify-Smart Delivery Navigator

## Overview
The **Smart Delivery Navigator** is a GUI application developed in **C++** using **RAD Studio**. This project showcases the use of graph theory and algorithms, specifically **Dijkstra's Algorithm**, to solve routing problems in real-world scenarios. It efficiently calculates the shortest delivery routes within a city and provides detailed information on distance, travel time, and fuel consumption. The intuitive GUI ensures an engaging user experience.

## Data Structures
- **Graph Implementation:** Utilizes both adjacency matrix and adjacency list for optimal performance.
- **Custom Node Structure:** Represents linked list elements for effective data management.
- **Fixed-size Arrays:** Used for storing location names and distances for quick access.

## Key Features
- **Fuel Consumption Calculation:** Estimates fuel usage based on distance and user-defined fuel rates.
- **Travel Time Estimation:** Calculates travel time using user-provided speed inputs.
- **Warning System:** Alerts users when fuel is insufficient for planned routes.
- **Case-insensitive Location Matching:** Allows seamless searches for location names.
- **Input Validation:** Ensures data reliability and consistency through thorough checks.

## Technologies Used
- **Programming Language:** C++
- **Framework:** FMX (FireMonkey) in RAD Studio

## Limitations
- Fixed graph size of 8 nodes limits scalability.
- Hard-coded location names restrict flexibility.
- Static edge connections may not reflect real-world changes.
- Lack of dynamic memory management for locations could affect performance.

## Safety Features
- Comprehensive input validation for all fields to minimize errors.
- Warning system for fuel requirements to ensure safe navigation.
- Clear error messages for invalid location entries to assist users.
- Consistent input sanitization to maintain data integrity.

## Performance Considerations
- **Time Complexity:** O(V²) for Dijkstra's algorithm, suitable for smaller graphs.
- **Space Complexity:** O(V²) for adjacency matrix storage, impacting memory usage.

## How to Run the Application

1. Clone the repository to your local machine:

    ```bash
    git clone https://github.com/your-username/DSA-Project-Smart-Delivery-Navigator.git
    ```

2. Navigate to the project directory:

    ```bash
    cd DSA-Project-Smart-Delivery-Navigator
    ```

3. Open the project in **RAD Studio**.

4. Build and run the application within the IDE.

5. Follow the on-screen instructions to interact with the navigator.

## Project Structure

The repository is organized into two main directories for clarity:

```
DSA-Project-Smart-Delivery-Navigator/
│
├── code/
│   ├── GUI/
│   │   ├── main.cpp                # Main application file with GUI
│   │   ├── delivery_navigator.fmx  # GUI layout file
│   │   ├── resources/              # Images and assets for the GUI
│   │   └── utils.cpp               # Utility functions for GUI handling
│   │
│   └── without_gui/
│       ├── main.cpp                # Console application file
│       ├── graph.cpp               # Graph implementation
│       ├── dijkstra.cpp            # Dijkstra's algorithm implementation
│       └── utils.cpp               # Utility functions for console operations
│
└── README.md                       # Project documentation
```

---

This project illustrates the application of data structures and algorithms in creating smart navigation systems, blending technical efficiency with user-friendly design.

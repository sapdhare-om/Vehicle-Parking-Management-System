# Vehicle Parking Management System

## Overview

The Vehicle Parking Management System is a Data Structures and Algorithms (DSA) mini project developed in C++. The project simulates a multi-level parking system and demonstrates the practical implementation of fundamental data structures such as Arrays, Queue, and Stack.

The system allows users to book parking slots, search vehicles, manage vehicle exits, maintain entry records, and track exit history efficiently.

---

## Problem Statement

Managing vehicle parking manually can be time-consuming and error-prone. This project provides a simple parking management solution that helps track vehicle entries and exits while maintaining parking slot availability.

---

## Features

* Display parking slot availability
* Book parking slots
* Search vehicle by vehicle number
* Vehicle exit management
* Entry queue management using Queue
* Exit history management using Stack
* Parking fee calculation
* Duplicate vehicle detection
* Multi-floor parking system

---

## Data Structures Used

### 1. Array

A 2D array is used to represent parking floors and parking slots.

```cpp
string vehicle[3][5];
```

* 3 Floors
* 5 Parking Slots per Floor

### 2. Queue

Queue is used to maintain the order of vehicle entries.

Operations:

* Enqueue
* Display Queue

### 3. Stack

Stack is used to maintain the history of exited vehicles.

Operations:

* Push
* Display Exit History

---

## Project Structure

Vehicle Parking Management System

├── Stack Class

├── Queue Class

├── Parking Class

│ ├── Display Parking Status

│ ├── Book Vehicle

│ ├── Exit Vehicle

│ ├── Search Vehicle

│ ├── Show Entry Queue

│ └── Show Exit History

└── Main Menu Driven Program

---

## Menu Operations

1. Display Parking Status
2. Book Parking Slot
3. Exit Vehicle
4. Search Vehicle
5. Exit History
6. Entry Queue
7. Exit Program

---

## Working

### Booking a Vehicle

* User enters vehicle number.
* Selects floor and slot.
* Parking charges are calculated based on hours.
* Vehicle is added to Entry Queue.

### Vehicle Exit

* User enters vehicle number.
* Vehicle is removed from parking slot.
* Vehicle number is pushed into Exit History Stack.

### Vehicle Search

* Searches the parking database for the vehicle number.
* Displays floor and slot location.

---

## Sample Output

Parking Status

Floor 1: [Free] [Free] [Free] [Free] [Free]

Floor 2: [Free] [Free] [Free] [Free] [Free]

Floor 3: [Free] [Free] [Free] [Free] [Free]

---

## Technologies Used

* C++
* Object Oriented Programming (OOP)
* Arrays
* Queue
* Stack
* Dev C++

---

## Learning Outcomes

* Understanding of Stack implementation
* Understanding of Queue implementation
* Practical use of Arrays
* Searching techniques
* Object Oriented Programming concepts
* Real-world application of Data Structures

---

## Future Enhancements

* Database Integration
* User Authentication
* Parking Reservation System
* Dynamic Slot Allocation
* Graphical User Interface (GUI)
* Online Payment Integration

---

## Conclusion 
The Vehicle Parking Management System demonstrates how fundamental Data Structures can be used to solve real-world parking management problems. The project successfully integrates Arrays, Queue, and Stack to manage parking operations efficiently while providing a simple and user-friendly interface.





The Vehicle Parking Management System demonstrates how fundamental Data Structures can be used to solve real-world parking management problems. The project successfully integrates Arrays, Queue, and Stack to manage parking operations efficiently while providing a simple and user-friendly interface.

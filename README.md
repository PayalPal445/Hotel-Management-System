## 🏨 Hotel Management System (C++ Project)

A simple Hotel Management System implemented in C++.
This project allows hotel staff to book rooms, view customer details, list all booked rooms, and checkout customers.
It is a console-based program designed using classes, structures, and STL maps.

## 📌 Features

📖 Book a Room – Assigns a room to a customer with details.

👤 View Customer Record – View full details of a customer using room number.

📋 View All Booked Rooms – Lists all currently booked rooms with customer names.

🚪 Checkout – Frees a room when a customer checks out.

🛑 Exit Option – Gracefully closes the system.

## 🛠️ Technologies Used

Language: C++

Concepts Used:

Classes & Objects

Structures

Maps (std::map) for storing customer-room mapping

#3 Basic Input/Output

## 🚀 Getting Started
1. Save Code
```bash
Save the program as hotel_management.cpp.
```
2. Compile
```bash
Using g++:

g++ hotel_management.cpp -o hotel_management
```
3. Run
```bash
./hotel_management
```

On Windows (CMD/PowerShell):

hotel_management.exe

## 📂 Menu Options

When you run the program, you’ll see:

============ HOTEL MANAGEMENT MENU ==========
 1. BOOK A ROOM
 2. VIEW CUSTOMER RECORD
 3. VIEW ALL BOOKED ROOMS
 4. CHECKOUT
 5. EXIT
 ## Enter Choice :

🎯 Example Usage
✅ Booking a Room
Enter room number: 101
Enter Name: John Doe
Enter Address: New Delhi
Enter phone number: 9876543210
Enter No. of Days: 3
Room booked successfully!

## 👤 Viewing Customer Details
Enter room no to view: 101

Customer details:
Name: John Doe
Address: New Delhi
Phone: 9876543210
Days Stay: 3
Total Payments Rs.3000

## 📋 Viewing All Booked Rooms
All booked Rooms:
Room No: 101  Name: John Doe

## 🚪 Checkout
Enter Room Number to checkout: 101
Customer John Doe has been checked out.

## 📌 File Structure
hotel_management.cpp   # Main C++ source code
README.md              # Documentation

## 📝 Notes

Each room costs ₹1000 per day (hardcoded).

Room numbers are unique; duplicate booking of the same room is not allowed.

Uses map<int, customer> for efficient lookup of rooms.

## 📌 Future Improvements

Add room types (Deluxe, Suite, Standard) with different rates.

Store records in a file (persistent storage) instead of memory.

Add search functionality (by name/phone).

Improve user interface with colors (ANSI escape codes).

👨‍💻 Author

Developed as a C++ project to practice OOP, STL, and basic hotel management logic.

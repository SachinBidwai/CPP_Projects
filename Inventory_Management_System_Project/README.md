# Inventory Management System - Grocery Store

## ?? Project Overview
The **Inventory Management System** is a console-based C++ application for a **Grocery Store** that allows users to:

? View available inventory (items, stock, prices)
? Purchase items and generate a bill
? Automatically update inventory after purchase
? Display a detailed receipt after payment
? Menu-driven system for user-friendly interaction

This project is implemented using **Object-Oriented Programming (OOP) concepts**, including **encapsulation, modularity, and polymorphism**.

---

## ??? Technologies Used
- **C++**
- **Standard Template Library (STL)**

---

## ?? Project Structure
```
InventoryManagement/
??? main.cpp         // Main entry point
??? App.h            // Application class declaration
??? App.cpp          // Application logic
??? Inventory.h      // Inventory class declaration
??? Inventory.cpp    // Inventory management logic
??? Product.h        // Product class declaration
??? Product.cpp      // Product implementation
??? README.md        // Project documentation
```

---

## ?? Usage Guide
1?? **Start the program**
   - Runs the menu-driven system.

2?? **View Inventory**
   - Displays available items, stock, and price per unit.

3?? **Purchase Items**
   - User enters item name and quantity.
   - If stock is available, the bill is displayed.
   - Inventory updates automatically.

4?? **Exit the System**
   - Closes the program.

---

## ?? Sample Output
```
===== Grocery Store Inventory System =====
1. View Inventory
2. Purchase Item
3. Exit
Enter your choice: 1

Available Inventory:
-----------------------------------
Item      Stock  Price (per unit)
-----------------------------------
Rice      10     50
Flour     20     40
Sugar     15     35
Milk      25     30
-----------------------------------

Enter your choice: 2
Enter item name: Rice
Enter quantity: 5

? Purchase successful!
Total Bill: ?250
-----------------------------------
Receipt:
Item: Rice
Quantity: 5
Total Price: ?250
-----------------------------------

Enter your choice: 3
Thank you for using the system. Goodbye!
```

---

## ?? Features & Benefits
? **Encapsulation** – Uses classes for better code organization.
? **Menu-Driven** – Interactive console interface.
? **Data Persistence** – Inventory updates dynamically.
? **Scalable** – Easily add more products or extend features.

---

## ?? Contribution
Feel free to **fork this repository**, make improvements, and submit a **pull request**. Any contributions are welcome!

---


## ?? Contact
For any questions or suggestions, contact **Sachin Bidwai** at **sachinbidwai1982@gmail.com**

---

?? **Happy Coding!** ??


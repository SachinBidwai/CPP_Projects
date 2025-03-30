#include "App.h"
#include <iostream>

void App::run() {
    int choice;
    do {
        std::cout << "\n===== Grocery Store Inventory System =====\n";
        std::cout << "1. View Inventory\n";
        std::cout << "2. Purchase Item\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            inventory.displayInventory();
            break;
        case 2: {
            std::string itemName;
            int quantity;
            std::cout << "Enter item name: ";
            std::cin >> itemName;
            std::cout << "Enter quantity: ";
            std::cin >> quantity;
            inventory.sellItem(itemName, quantity);
            break;
        }
        case 3:
            std::cout << "\nThank you for using the system. Goodbye!\n";
            break;
        default:
            std::cout << "\n? Invalid choice! Please try again.\n";
        }
    } while (choice != 3);
}
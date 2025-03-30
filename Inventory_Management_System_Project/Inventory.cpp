#include "Inventory.h"
#include <iostream>

Inventory::Inventory() {
    productList.push_back(Product("Rice", 10, 50.0));
    productList.push_back(Product("Flour", 20, 40.0));
    productList.push_back(Product("Sugar", 15, 35.0));
    productList.push_back(Product("Milk", 25, 30.0));
}

void Inventory::displayInventory() const {
    std::cout << "\nAvailable Inventory:\n";
    std::cout << "-----------------------------------\n";
    std::cout << "Item\tStock\tPrice (per unit)\n";
    std::cout << "-----------------------------------\n";

    for (const auto& product : productList) {
        std::cout << product.getProductName() << "\t"
            << product.getStockQuantity() << "\t"
            << product.getUnitPrice() << "\n";
    }
    std::cout << "-----------------------------------\n";
}

void Inventory::sellItem(const std::string& productName, int quantity) {
    for (auto& product : productList) {
        if (product.getProductName() == productName) {
            if (product.sellProduct(quantity)) {
                double totalPrice = quantity * product.getUnitPrice();
                std::cout << "\n? Purchase successful!\n";
                std::cout << "Total Bill: ?" << totalPrice << "\n";
                std::cout << "-----------------------------------\n";
                std::cout << "Receipt:\n";
                std::cout << "Item: " << productName << "\n";
                std::cout << "Quantity: " << quantity << "\n";
                std::cout << "Total Price: ?" << totalPrice << "\n";
                std::cout << "-----------------------------------\n";
            }
            else {
                std::cout << "\n? Insufficient stock!\n";
            }
            return;
        }
    }
    std::cout << "\n? Item not found in inventory!\n";
}

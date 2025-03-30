#pragma once

#ifndef INVENTORY_H
#define INVENTORY_H

#include "Product.h"
#include <vector>

class Inventory {
private:
    std::vector<Product> productList;

public:
    Inventory();
    void displayInventory() const;
    void sellItem(const std::string& productName, int quantity);
};

#endif


#pragma once

#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
private:
    std::string productName;
    int stockQuantity;
    double unitPrice;

public:
    Product(std::string name, int quantity, double price);

    std::string getProductName() const;
    double getUnitPrice() const;
    int getStockQuantity() const;

    void setUnitPrice(double price);
    void updateStock(int quantity);
    bool sellProduct(int quantity);
};

#endif


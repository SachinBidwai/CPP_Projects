#include "Product.h"

Product::Product(std::string name, int quantity, double price)
    : productName(name), stockQuantity(quantity), unitPrice(price) {}

std::string Product::getProductName() const {
    return productName;
}

double Product::getUnitPrice() const {
    return unitPrice;
}

int Product::getStockQuantity() const {
    return stockQuantity;
}

void Product::setUnitPrice(double price) {
    unitPrice = price;
}

void Product::updateStock(int quantity) {
    stockQuantity += quantity;
}

bool Product::sellProduct(int quantity) {
    if (quantity > stockQuantity) {
        return false;
    }
    stockQuantity -= quantity;
    return true;
}

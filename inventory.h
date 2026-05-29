#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "Product.h"

using namespace std;

class Inventory {
private:
    vector<Product> products;

public:
    void addProduct();
    void viewProducts();
    void searchProduct();
    void updateProduct();
    void deleteProduct();
    void restockProduct();
    void lowStockAlert();
};

#endif
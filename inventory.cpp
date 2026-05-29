#include <iostream>
#include "Inventory.h"

using namespace std;

void Inventory::addProduct() {

    Product p;

    cout << "\nEnter Product ID: ";
    cin >> p.id;

    cin.ignore();

    cout << "Enter Product Name: ";
    getline(cin, p.name);

    cout << "Enter Price: ";
    cin >> p.price;

    cout << "Enter Quantity: ";
    cin >> p.quantity;

    cin.ignore();

    cout << "Enter Category: ";
    getline(cin, p.category);

    products.push_back(p);

    cout << "\nProduct Added Successfully!\n";
}

void Inventory::viewProducts() {

    if(products.empty()) {
        cout << "\nNo Products Available.\n";
        return;
    }

    cout << "\n========== PRODUCTS ==========\n";

    for(auto p : products) {

        cout << "\nID: " << p.id;
        cout << "\nName: " << p.name;
        cout << "\nPrice: " << p.price;
        cout << "\nQuantity: " << p.quantity;
        cout << "\nCategory: " << p.category;
        cout << "\n------------------------";
    }

    cout << endl;
}

void Inventory::searchProduct() {

    int id;

    cout << "\nEnter Product ID: ";
    cin >> id;

    for(auto p : products) {

        if(p.id == id) {

            cout << "\nProduct Found!\n";

            cout << "\nID: " << p.id;
            cout << "\nName: " << p.name;
            cout << "\nPrice: " << p.price;
            cout << "\nQuantity: " << p.quantity;
            cout << "\nCategory: " << p.category << endl;

            return;
        }
    }

    cout << "\nProduct Not Found!\n";
}

void Inventory::updateProduct() {

    int id;

    cout << "\nEnter Product ID to Update: ";
    cin >> id;

    for(auto &p : products) {

        if(p.id == id) {

            cout << "\nEnter New Price: ";
            cin >> p.price;

            cout << "Enter New Quantity: ";
            cin >> p.quantity;

            cin.ignore();

            cout << "Enter New Category: ";
            getline(cin, p.category);

            cout << "\nProduct Updated Successfully!\n";
            return;
        }
    }

    cout << "\nProduct Not Found!\n";
}

void Inventory::deleteProduct() {

    int id;

    cout << "\nEnter Product ID to Delete: ";
    cin >> id;

    for(auto it = products.begin(); it != products.end(); it++) {

        if(it->id == id) {

            products.erase(it);

            cout << "\nProduct Deleted Successfully!\n";
            return;
        }
    }

    cout << "\nProduct Not Found!\n";
}

void Inventory::restockProduct() {

    int id;
    int qty;

    cout << "\nEnter Product ID: ";
    cin >> id;

    for(auto &p : products) {

        if(p.id == id) {

            cout << "Enter Quantity to Add: ";
            cin >> qty;

            p.quantity += qty;

            cout << "\nStock Updated Successfully!\n";
            return;
        }
    }

    cout << "\nProduct Not Found!\n";
}

void Inventory::lowStockAlert() {

    bool found = false;

    cout << "\n===== LOW STOCK PRODUCTS =====\n";

    for(auto p : products) {

        if(p.quantity < 5) {

            found = true;

            cout << "\nID: " << p.id;
            cout << "\nName: " << p.name;
            cout << "\nQuantity: " << p.quantity;
            cout << "\n----------------------";
        }
    }

    if(!found) {
        cout << "\nNo Low Stock Products.\n";
    }
}
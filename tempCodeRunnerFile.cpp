#include <iostream>
#include "Inventory.h"

using namespace std;

int main() {

    Inventory inventory;

    int choice;

    do {

        cout << "\n================================";
        cout << "\n MINI STORE INVENTORY MANAGER";
        cout << "\n================================";

        cout << "\n1. Add Product";
        cout << "\n2. View Products";
        cout << "\n3. Exit";

        cout << "\n\nEnter Choice: ";
        cin >> choice;

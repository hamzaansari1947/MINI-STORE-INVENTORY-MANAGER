#include <iostream>
#include "Inventory.h"

using namespace std;

int main() {

    Inventory inventory;

    int choice;

    do {

        cout << "\n====================================";
        cout << "\n MINI STORE INVENTORY MANAGER";
        cout << "\n====================================";

        cout << "\n1. Add Product";
        cout << "\n2. View Products";
        cout << "\n3. Search Product";
        cout << "\n4. Update Product";
        cout << "\n5. Delete Product";
        cout << "\n6. Restock Product";
        cout << "\n7. Low Stock Alert";
        cout << "\n8. Exit";

        cout << "\n\nEnter Choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            inventory.addProduct();
            break;

        case 2:
            inventory.viewProducts();
            break;

        case 3:
            inventory.searchProduct();
            break;

        case 4:
            inventory.updateProduct();
            break;

        case 5:
            inventory.deleteProduct();
            break;

        case 6:
            inventory.restockProduct();
            break;

        case 7:
            inventory.lowStockAlert();
            break;

        case 8:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while(choice != 8);

    return 0;
}
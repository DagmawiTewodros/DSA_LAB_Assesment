#include <iostream>
#include <string>
using namespace std;
#define TAX_RATE_PREPROCESSOR 0.07
int main() {
    cout << "This program calculates product sales and inventory analysis!!\n";
    cout << "Remember, C++ is a compiled language, so this program was compiled before execution.\n\n";
    string productName;
    int productCategory;
    int initialInventory;

    float productPrice;
    int itemsSold;
    int sampleVar1 = 10;
    int sampleVar2;
    sampleVar2 = 20;
    int sampleVar3{30};
    cout << "Enter the product name: ";
    cin >> productName;

    cout << "Enter the product category (1-5): ";
    cin >> productCategory;
    cout << "Enter the initial inventory quantity: ";
    cin >> initialInventory;
    cout << "Enter the product price per unit: ";
    cin >> productPrice;
    cout << "Enter the number of items sold: ";
    cin >> itemsSold;
    int newInventory = initialInventory - itemsSold;
    float totalSalesAmount = itemsSold * productPrice;
    
    string inventoryStatus;

    if (newInventory < 10)

        inventoryStatus = "Low Inventory";
    else

        inventoryStatus = "sufficient Inventory";


    auto helperSalesAmount = totalSalesAmount;
    decltype(initialInventory) helperInventory = newInventory;
    const float TAX_RATE_CONST = 0.07;
    float totalSalesWithTax = totalSalesAmount * (1 + TAX_RATE_CONST);
    cout << "\n--- Product Sales and Inventory Analysis ---\n";
    cout << "Product Name: " << productName << "\n";
    cout << "Product Category: " << productCategory << "\n";
    cout << "Initial Inventory: " << initialInventory << "\n";
    cout << "Product Price: $" << productPrice << "\n";

    cout << "Items Sold: " << itemsSold << "\n";
    cout << "New Inventory: " << newInventory << "\n";
    cout << "Inventory Status: " << inventoryStatus << "\n";
    cout << "Total Sales Amount: $" << totalSalesAmount << "\n";
    cout << "Total Sales Amount (including tax): $" << totalSalesWithTax << "\n";
    cout << "Helper Sales Amount (auto): $" << helperSalesAmount << "\n";
    cout << "Helper Inventory (decltype): " << helperInventory << "\n";
    return 0;
}
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    const double SalesTaxRate = 0.075;

    double OriginalPrice;
    double SalesTax;
    double TotalCost;

    cout << endl;

    cout << "Enter the price of an item: ";
    cin >> OriginalPrice;

    SalesTax = OriginalPrice * SalesTaxRate;
    TotalCost = OriginalPrice + SalesTax;

    cout << fixed << setprecision(2);
    cout << "Original Price: $" << OriginalPrice << endl;
    cout << "Sales Tax: $" << SalesTax << endl;
    cout << "Total Cost: $" << TotalCost << endl;

    cout << endl;

    return 0;
}

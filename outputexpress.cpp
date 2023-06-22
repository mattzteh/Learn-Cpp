#include <iostream>

using namespace std;


int main() {

    double sales = 95000;
    const double stateTaxRate = 0.04;
    const double countyTaxRate = 0.02;

    double stateTax = sales * stateTaxRate;
    double countyTax = sales * countyTaxRate;

    double totalTax = stateTax + countyTax;
    double netSales = (sales - stateTax - countyTax);

    cout << "State Tax: $" << stateTax << endl
         << "County Tax: $" << countyTax << endl
         << "Total Tax: $" << totalTax << endl
         << "Net Sales: $" << netSales << endl;

    return 0;
}
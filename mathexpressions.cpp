#include <iostream>

using namespace std;

int addition(int num1, int num2) {

    int sum = num1 + num2;

    cout<<sum<<"\n";

    return 0;
}

int subtraction(int num1, int num2) {
    int difference = num1 - num2;

    cout<<difference<<"\n";
}

int multiplication(int num1, int num2) {
    int product = num1 * num2;

    cout<<product<<"\n";
}

int division(double numerator, int denominator) {
    int quotient = numerator / denominator;

    cout<<quotient<<"\n";
}

int modulo(int num1, int num2) {
    int res = num1 % num2;

    cout<<res<<"\n";
}

int main() {

    int x = 10;
    int y = 5;
    double z = 15;

    addition(x, y);
    subtraction(y, x);
    multiplication(x, y);
    division(z, y);
    modulo(x, y);

    return 0;
}
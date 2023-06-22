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

int increment() {
    int x = 10;
    int y = x++; // x = 11, y = 10
    // value of x will be stored in y, THEN it will be incremented by 1

    int z = ++x; // x = 12, z = 12
    // value of x will be incremented by one, THEN it will be stored in z

    cout<<y<<"\n"<<z<<"\n";
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
    increment();

    return 0;
}
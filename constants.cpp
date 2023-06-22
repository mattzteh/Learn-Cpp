#include <iostream>


int main() {
    const double pi = 3.14;

    // if variable pi is reassigned, will throw an error. "const" will prevent variables value from being reassigned

    std::cout<<pi;

    return 0;
}
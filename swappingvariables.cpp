#include <iostream>

int main() {
    int a = 1;
    int b = 2;

    int temp = a;
    a = b;
    b = temp;

    // imagine a and b are a bucket. In order to swap the contents in each bucket, we will need a third bucket to temporary store the value
    // of one bucket before we can swap.
    // 1 (or the value of a) will be put in the third bucket.
    // then we can reassign a to the value of b
    // then we can resassign the value of b to the temp, because the temp variable is holding the value of a

    std::cout<<a;

    return 0;
}
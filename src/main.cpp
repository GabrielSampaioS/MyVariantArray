#include <iostream>
#include "myArray.h"

int main() {
    myArray arr;

    arr[0] = 1;
    arr[1] = "banana";
    arr[2] = 8;
    arr[3] = 1.1;
    arr[4] = -1;
    arr[5] = false;
    arr[6] = true;
    arr[7] = 10;
    arr[8] = "gabriel";

    arr[0] = arr[2];
    arr[0] = arr[2] + arr[7];
    arr[9] = arr[1] + arr[8];

    arr.print();

    std::cin.get();
    return 0;
}

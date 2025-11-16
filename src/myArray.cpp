#include "myArray.h"
#include <iostream>

myVariant& myArray::operator[](size_t index) {
    if (index >= data.size())
        data.resize(index + 1);

    return data[index];
}

int myArray::size() const {
    return data.size();
}

void myArray::print() const {
    std::cout << "[ ";
    for (size_t i = 0; i < data.size(); ++i) {
        data[i].print();
        if (i < data.size() - 1)
            std::cout << ", ";
    }
    std::cout << " ]\n";
}

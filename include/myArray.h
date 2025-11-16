#ifndef MYARRAY_H
#define MYARRAY_H

#include <vector>
#include "myVariant.h"

class myArray {
private:
    std::vector<myVariant> data;

public:
    myVariant& operator[](size_t index);

    int size() const;

    void print() const;
};

#endif

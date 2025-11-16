#ifndef MYVARIANT_H
#define MYVARIANT_H

#include <string>
#include <iostream>

enum typeData {
    TYPE_INT,
    TYPE_DOUBLE,
    TYPE_BOOL,
    TYPE_STRING,
    TYPE_UNDEFINED
};

class myVariant {
private:
    typeData type;

    union {
        int i;
        double d;
        bool b;
    };

    std::string s;

public:
    myVariant();

    myVariant(int v);
    myVariant(double v);
    myVariant(bool v);
    myVariant(const std::string& v);
    myVariant(const char* v);

    void print() const;

    myVariant& operator=(const myVariant& other);
    myVariant operator+(const myVariant& other) const;

    friend std::ostream& operator<<(std::ostream& os, const myVariant& v);
};

#endif

#include "myVariant.h"

myVariant::myVariant() : type(TYPE_UNDEFINED), i(0) {}

myVariant::myVariant(int v) : type(TYPE_INT), i(v) {}
myVariant::myVariant(double v) : type(TYPE_DOUBLE), d(v) {}
myVariant::myVariant(bool v) : type(TYPE_BOOL), b(v) {}
myVariant::myVariant(const std::string& v) : type(TYPE_STRING), s(v) {}
myVariant::myVariant(const char* v) : type(TYPE_STRING), s(v) {}

void myVariant::print() const {
    switch (type) {
        case TYPE_INT: std::cout << i; break;
        case TYPE_DOUBLE: std::cout << d; break;
        case TYPE_BOOL: std::cout << (b ? "true" : "false"); break;
        case TYPE_STRING: std::cout << s; break;
        default: std::cout << "undefined";
    }
}

myVariant& myVariant::operator=(const myVariant& other) {
    if (this == &other) return *this;

    type = other.type;

    switch (type) {
        case TYPE_INT: i = other.i; break;
        case TYPE_DOUBLE: d = other.d; break;
        case TYPE_BOOL: b = other.b; break;
        case TYPE_STRING: s = other.s; break;
        default: break;
    }

    return *this;
}

myVariant myVariant::operator+(const myVariant& other) const {
    // INT + INT
    if (type == TYPE_INT && other.type == TYPE_INT)
        return myVariant(i + other.i);

    // DOUBLE + DOUBLE
    if (type == TYPE_DOUBLE && other.type == TYPE_DOUBLE)
        return myVariant(d + other.d);

    // INT + DOUBLE
    if (type == TYPE_INT && other.type == TYPE_DOUBLE)
        return myVariant((double)i + other.d);

    // DOUBLE + INT
    if (type == TYPE_DOUBLE && other.type == TYPE_INT)
        return myVariant(d + (double)other.i);

    // STRING + STRING
    if (type == TYPE_STRING && other.type == TYPE_STRING)
        return myVariant(s + other.s);

    // STRING + INT
    if (type == TYPE_STRING && other.type == TYPE_INT)
        return myVariant(s + std::to_string(other.i));

    // INT + STRING
    if (type == TYPE_INT && other.type == TYPE_STRING)
        return myVariant(std::to_string(i) + other.s);

    // STRING + DOUBLE
    if (type == TYPE_STRING && other.type == TYPE_DOUBLE)
        return myVariant(s + std::to_string(other.d));

    // DOUBLE + STRING
    if (type == TYPE_DOUBLE && other.type == TYPE_STRING)
        return myVariant(std::to_string(d) + other.s);

    return myVariant("undefined");
}

std::ostream& operator<<(std::ostream& os, const myVariant& v) {
    switch (v.type) {
        case TYPE_INT: os << v.i; break;
        case TYPE_DOUBLE: os << v.d; break;
        case TYPE_BOOL: os << (v.b ? "true" : "false"); break;
        case TYPE_STRING: os << v.s; break;
        default: os << "undefined"; break;
    }
    return os;
}

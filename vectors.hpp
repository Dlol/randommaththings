#ifndef VECTORS_HPP_
#define VECTORS_HPP_
#include <iostream>

class vector2{
  public:
    double x = 0;
    double y = 0;
    vector2 (double X, double Y) {x = X; y = Y;}
    
};

std::ostream& operator<<(std::ostream& os, const vector2& v2) {
    os << "(" << v2.x << "," << v2.y << ")";
    return os;
}

#endif
#ifndef GEO_HPP_
#define GEO_HPP_
#include "vectors.hpp"
#include <cmath>

float distance(vector2 a, vector2 b){
  return std::sqrt(std::pow(a.x - b.x, 2) + std::pow(a.y - b.y, 2));
}
#endif
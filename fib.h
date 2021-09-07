#ifndef FIB_H_
#define FIB_H_

#include <math.h>

int fibbonacci(int n){
  // comments are only here because i know ill forget something
  
  // Phi is Phi
  float Phi = 1.6180339887;
  // nphi is the negative reciprocal of Phi
  float nphi = -0.6180339887;
  // sqf stands for the square root of 5
  float sqf = 2.2360679664;
  
  return (pow(Phi,n) - pow(nphi,n)) / sqf;
}

#endif
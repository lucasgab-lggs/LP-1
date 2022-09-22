#include <iostream>
#include <cmath>
#include "algebra.h"
using namespace std;

void calculaQuadrado(int numero) {
  int resultado = pow(numero, 2);
  cout << numero << "² = " << resultado << endl;
}

void calculaQuadrado(float numero) {
  float resultado = pow(numero, 2);
  cout << numero << "² = " << resultado << endl;
}
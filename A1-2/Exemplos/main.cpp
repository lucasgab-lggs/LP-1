#include <iostream>
#include "conv.h"

int main() {
    float temp;
    int opcao = 0;
    opcao = menu();
    temp = obterTemperatura();
    imprimir(opcao, temp);
}
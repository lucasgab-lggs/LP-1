#include <iostream>
#include "conv.h"

using std::cin;
using std::cout;
using std::endl;


// Função apra mostrar o menu principal
int menu(){
    int opcao;
    cout << "Conversor de temperatura" << endl;
    cout << "(1) Celsius -> Fahrenheit" << endl;
    cout << "(2) Fahrenheit -> Celsius" << endl;
    cout << "Digite sua opção: ";
    cin >> opcao;
    return opcao;
}

// Função para receber a entrada da temperatura pelo usuário.
float obterTemperatura() {
    int temp;
    cout << "Digite a temperatura: ";
    cin >> temp;
    return temp;
}

// Função para converter da escala Celsius para Fahrenheit.
float celsius2fahrenheit(float temp){
    return temp * 1.8 + 32;
}

// Função para converter da escala Fahrenheit para Celsius.
float fahrenheit2celsius(float temp){
    return (temp - 32) / 1.8;
}

// Função para fazer a impressão final.
void imprimir (int opcao, float temp) {
    float conv;

    switch (opcao)
    {
    case 1:
        conv = celsius2fahrenheit(temp);
        cout << temp << "ºC = " << conv << "ºF" << endl;
        break;
    case 2:
        conv = fahrenheit2celsius(temp);
        cout << temp << "ºF = " << conv << "ºC" << endl;
        break;
    default:
        cout << "Opção inválida!" << endl;
        break;
    }
}
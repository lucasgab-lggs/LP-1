#ifndef CONV_H
#define CONV_H

// Função apra mostrar o menu principal.
int menu();

// Função para receber a entrada da temperatura pelo usuário.
float obterTemperatura();

// Função para converter da escala Celsius para Fahrenheit.
float celsius2fahrenheit(float temp);

// Função para converter da escala Fahrenheit para Celsius.
float fahrenheit2celsius(float temp);

// Função para fazer a impressão final.
void imprimir (int opcao, float temp);

#endif
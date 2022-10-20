#include <iostream>
#include "Pilha.h"

int main()
{
    Pilha<int> pilha(5); // Cria pilha de tamanho 5;
    pilha.push(1);
    pilha.push(7);
    pilha.push(-15);
    std::cout << pilha.top() << std::endl;
    std::cout << "Tamanho: " << pilha.size() << std::endl;
    pilha.pop();
    std::cout << pilha.top() << std::endl;
    std::cout << "Tamanho: " << pilha.size() << std::endl;


    Pilha<std::string> pilha2(5); // Cria pilha de tamanho 5 para string;
    pilha2.push("Teste 1");
    pilha2.push("Teste 2");
    pilha2.push("Teste 3");
    std::cout << pilha2.top() << std::endl;
    std::cout << "Tamanho: " << pilha2.size() << std::endl;
    pilha2.pop();
    std::cout << pilha2.top() << std::endl;
    std::cout << "Tamanho: " << pilha2.size() << std::endl;

    return 0;
}

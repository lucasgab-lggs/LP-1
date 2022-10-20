#ifndef Pilha_H
#define Pilha_H

#include <iostream>

template <class T>
class Pilha
{
private:
    T *elementos;   // Ponteiro para os elementos armazenados na pilha.
    int tamanho;    // Quantidade atual de elementos.
    int capacidade; // Quantidade máxima de elementos.
public:
    Pilha(int n_capacidade = 1); // Construtor que permite o usuário escolher (ou não) o tamanho da pilha.
    ~Pilha();                    // Destrutor.
    bool empty();                // Diz se a pilha está vazia.
    bool full();                 // Diz se a pilha está cheia.
    int size();                  // Retorna o tamanho da pilha.
    int push(T novo);            // Adiciona um novo elemento no topo da pilha.
    int pop();                   // Remove o último elemento.
    T &top();                    // Retorna uma referência ao primeiro elemento da pilha.
};

// Cria a pilha com capacidade de n elementos. Caso n seja omitido, cria, por padrão, uma pilha de tamanho 1.
template <class T>
Pilha<T>::Pilha(int n_capacidade)
{
    tamanho = 0;
    capacidade = n_capacidade;
    elementos = new T[n_capacidade];
}

// Destrutor da pilha.
template <class T>
Pilha<T>::~Pilha()
{
    delete[] elementos;
}

// Determina se a pilha está vazia. Retorna 1, caso esteja vazia e 0 caso contrário.
template <class T>
bool Pilha<T>::empty()
{
    return tamanho == 0;
}

// Determina se a pilha está cheia. Retorna 1, caso esteja cheia e 0 caso contrário.
template <class T>
bool Pilha<T>::full()
{
    return tamanho == capacidade;
}

// Retorna o tamanho da pilha.
template <class T>
int Pilha<T>::size()
{
    return tamanho;
}

// Adiciona um elemento na pilha. Caso tenha sucesso, retorna 1 e 0 caso contrário.
template <class T>
int Pilha<T>::push(T novo)
{
    if (full())
        return 0;

    elementos[tamanho] = novo;
    tamanho++;
    return 1;
}

// Retira o elemento do topo da pilha.
template <class T>
int Pilha<T>::pop()
{
    if (empty())
        return 0;

    tamanho--;
    return 1;
}

// Retorna uma referência para o elemento do topo da pilha.
template <class T>
T &Pilha<T>::top()
{
    if (empty())
    {
        std::cerr << "ERRO: A pilha está vazia!";
        exit(EXIT_FAILURE);
    }
    return elementos[tamanho - 1];
}

#endif
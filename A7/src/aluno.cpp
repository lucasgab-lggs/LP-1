#include "aluno.h"
#include <cstring>

char* Aluno::getNome() {
    return nome;
}

void Aluno::setNome(char n[101]){
    strcpy(nome, n);
}

int Aluno::getIdade() {
    return idade;
}

void Aluno::setIdade(int i) {
    idade = i;
}

int Aluno::getMatricula() {
    return matricula;
}

void Aluno::setMatricula(int i) {
    matricula = i;
}

int Aluno::getCodCurso() {
    return cod_curso;
}

void Aluno::setCodCurso(int i) {
    cod_curso = i;
}

int Aluno::getTempoCurso() {
    return tempo_de_curso;
}

void Aluno::setTempoCurso(int i) {
    tempo_de_curso = i;
}

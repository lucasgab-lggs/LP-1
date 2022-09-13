#include <iostream>
#include "aluno.h"
using namespace std;

int main() {
    Aluno aluno;
    char nome[101];
    int idade;
    int matricula;
    int cod_curso;
    int tempo_curso;

    cout << "Digite o nome do aluno: ";
    cin >> nome;
    cout << "Digite a idade do aluno: ";
    cin >> idade;
    cout << "Digite a matrícula do aluno: ";
    cin >> matricula;
    cout << "Digite o código do curso: ";
    cin >> cod_curso;
    cout << "Digite o tempo de curso do aluno: ";
    cin >> tempo_curso;
    cout << "Aluno cadastrado com sucesso!" << endl;
    aluno.setNome(nome);
    aluno.setIdade(idade);
    aluno.setMatricula(matricula);
    aluno.setCodCurso(cod_curso);
    aluno.setTempoCurso(tempo_curso);
}
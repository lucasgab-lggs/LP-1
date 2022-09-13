class Aluno {
    private:
        char nome[101];
        int idade;
        int matricula;
        int cod_curso;
        int tempo_de_curso;
    public:
        char* getNome();
        void setNome(char n[101]);
        int getIdade();
        void setIdade(int i);
        int getMatricula();
        void setMatricula(int i);
        int getCodCurso();
        void setCodCurso(int i);
        int getTempoCurso();
        void setTempoCurso(int i);
};

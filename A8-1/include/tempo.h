#include <iostream>

class Tempo {
    private:
        short horas;
        short minutos;
        short segundos;
    public:
        Tempo(short h, short m, short s);
        Tempo(Tempo &t);
        Tempo operator+(Tempo &t);
        Tempo operator++();
        Tempo& operator=(Tempo const &t);
        friend std::ostream& operator<< (std::ostream &o, Tempo const &t);
        friend std::istream& operator>> (std::istream &i, Tempo &t);
};
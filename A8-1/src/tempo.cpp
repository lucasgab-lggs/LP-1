#include "tempo.h"

Tempo Tempo::operator+ (Tempo &t) {
    short h = horas + t.horas;
    short m = minutos + t.minutos;
    short s = segundos + t.segundos;
    return Tempo(h, m, s);
}

Tempo Tempo::operator++() {
    ++horas;
    ++minutos;
    ++segundos;
    return Tempo(horas, minutos, segundos);
}

Tempo& Tempo::operator= (Tempo const &t) {
    horas = t.horas;
    minutos = t.minutos;
    segundos = t.segundos;
    return *this;
}

std::ostream& operator<< (std::ostream &o, Tempo const &t) {
    o << t.horas << ":" << t.minutos << ":" << t.segundos;
    return o;
}

std::istream& operator>> (std::istream &i, Tempo &t) {
    i >> t.horas >> t.minutos >> t.segundos;
    return i;
}
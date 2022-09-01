#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int mdc(int p, int q) {
    if (q == 0) return p;
    else return mdc(q, p%q);
}

int main() {
    int p, q, n = 0;
    cout << "Digite o primeiro número: " << endl;
    cin >> p;
    cout << "Digite o segundo número: " << endl;
    cin >> q;
    n = mdc(p, q);
    cout << "mdc(" << p << "," << q << ") = " << n << endl;
}
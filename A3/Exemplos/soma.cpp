#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int soma(int n) {
    if (n == 1) return 1;
    else return n + soma(n-1);
}

int main() {
    int n = 0;
    cout << "Digite um número: " << endl;
    cin >> n;
    cout << "Soma " << n << " até 1 = " << soma(n) << endl;
}
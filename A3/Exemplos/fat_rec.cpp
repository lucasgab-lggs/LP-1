#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fatorial(int n) {
    if (n < 2) return 1;
    else return n * fatorial(n-1);
}

int main() {
    int n = 0;
    cout << "Digite um número: " << endl;
    cin >> n;
    cout << n << "! = " << fatorial(n) << endl;
}
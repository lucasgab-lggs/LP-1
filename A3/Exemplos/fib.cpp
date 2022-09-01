#include <iostream>
using namespace std;

int fibonacci(int n) { 
    if (n < 2) return n;
    else return fibonacci(n-1) + fibonacci(n-2);
}

int main(void) {
    int n, f;

    cout << "Digite um número:" << endl;
    cin >> n; 
    
    f=fibonacci(n);  

    cout << "O termo " << n << " da série de Fibonacci é: " << f << endl;

    return 0;
}
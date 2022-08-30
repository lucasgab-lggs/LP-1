#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{

    float media = 0;
    int numero1, numero2, numero3 = 0;

    cout << "Digite o primeiro número: " << endl;
    cin >> numero1;

    cout << "Digite o segundo número: " << endl;
    cin >> numero2;


    cout << "Digite o terceiro número: " << endl;
    cin >> numero3;

    media = (numero1 + numero2 + numero3) / 3;

    cout << "A média aritmética entre " << numero1 << ", " << numero2 << " e " << numero3 << " é " << media << endl;

    return 0;
}

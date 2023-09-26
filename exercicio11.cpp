#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int numero, original, soma, numDigitos;

    cout << "Digite um número inteiro: ";
    cin >> numero;
    original = numero;
    soma = 0;
    numDigitos = 0;

    // Calcula o número de dígitos
    while (numero != 0) {
        numero = numero/10;
        numDigitos++;
    }

    numero = original; //Restaura o valor original

    while (numero != 0) {
        int digito = numero % 10;
        soma = (soma + pow(digito, numDigitos));
        numero = numero/10;
    }

    if (soma == original) {
        cout << original << " é um número de Armstrong." << endl;
    } else {
        cout << original << " não é um número de Armstrong." << endl;
    }

    return 0;
}

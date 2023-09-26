#include <iostream>

using namespace std;

int main() {
    int num, original, digito;
    int reverso = 0;

    cout << "Digite um número inteiro: ";
    cin >> num;

    original = num; // Armazenar o número original para comparação posterior

    // Inverter o número
    while (num > 0) {
        digito = num % 10;
        reverso = reverso * 10 + digito;
        num = num / 10;
    }

    // Verificar se o número original é igual ao número invertido
    if (original == reverso) {
        cout << "O número " << original << " é um palíndromo." << endl;
    } 
    else {
        cout << "O número " << original << " não é um palíndromo." << endl;
    }

    return 0;
}

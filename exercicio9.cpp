#include <iostream>

using namespace std;

int main() {
    int num, somadiv;

    cout << "Digite um número inteiro: ";
    cin >> num;
    somadiv = 0;
    
    //encontrar os divisores
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            somadiv = somadiv + i;
        }
    }

    //verificar se é perfeito
    if (somadiv == num) {
        cout << num << " é um número perfeito." << endl;
    }
    else {
        cout << num << " não é um número perfeito." << endl;
    }

    return 0;
}
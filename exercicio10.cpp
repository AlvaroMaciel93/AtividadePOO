#include <iostream>

using namespace std;

int main() {
    int num, anterior, atual, prox;
    
    anterior = 0;
    atual = 1;

    cout << "Digite um número inteiro: ";
    cin >> num;

    cout << "Sequência de Fibonacci até " << num << ":" << endl;

    while (atual <= num) {
        cout << atual << " ";
        prox = anterior + atual;
        anterior = atual;
        atual = prox;
    }

    cout << endl;

    return 0;
}

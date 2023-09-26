#include <iostream>

using namespace std;

int main() {
    srand(time(NULL));

    int num, palpite, tentativa;
    num = rand() % 100;
    tentativa = 1;
    
    cout << "Bem-vindo ao jogo de adivinhação!" << endl;

    while (palpite != num) {
        cout << "Digite seu palpite (entre 1 e 100): ";
        cin >> palpite;
        tentativa++;

        if (palpite < num) {
            cout << "Mais" << endl;
        }
        else if (palpite > num) {
            cout << "Menos" << endl;
        }
        else {
            cout << "Parabéns! Você acertou o número " << num << " em " << tentativa << " tentativas." << endl;
        }
    }
    
    return 0;
}
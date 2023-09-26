#include <iostream>

using namespace std;

int main() {
    int altura;
    char caractere;

    cout << "Insira a altura do padrão: ";
    cin >> altura;

    caractere = 'A';

    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            cout << caractere;
            caractere++;
        }
        cout << endl;
    }

    return 0;
}

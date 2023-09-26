#include <iostream>

using namespace std;

int main() {
    int altura;
    char caractere;

    cout << "Insira a altura do padrão: ";
    cin >> altura;

    caractere = '*';
    
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= altura; j++) {
            cout << caractere << " ";
        }
        cout << endl;
    }

    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            cout << caractere << " ";
        }
        cout << endl;
    }
    
    return 0;
}
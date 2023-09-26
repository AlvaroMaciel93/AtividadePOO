#include <iostream>

using namespace std;

int main() {
    int num, i;

    cout << "Digite um número inteiro: ";
    cin >> num;

    cout << "Os divisores de " << num << " são:" << endl;

    for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
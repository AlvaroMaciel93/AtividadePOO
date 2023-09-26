#include <iostream>

using namespace std;

int main() {
    int num, i;
    bool primo;
    
    cout << "Números primos de 1 a 100:" << endl;
    
    for (num = 2; num <= 100; num++) {
        bool primo = true;

        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                primo = false;
                break;
            }
        }

        if (primo) {
            cout << num << " ";
        }
    }

    cout << endl;

    return 0;
}

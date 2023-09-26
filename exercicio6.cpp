#include <iostream>

using namespace std;

int main() {
    int matricula;
    double nota1, nota2, nota3, media;
    char continuar;

    do {
        cout << "Digite a matrícula do aluno (apenas números): ";
        cin >> matricula;

        cout << "Digite a primeira nota do aluno: ";
        cin >> nota1;
        
        cout << "Digite a segunda nota do aluno: ";
        cin >> nota2;
        
        cout << "Digite a terceira nota do aluno: ";
        cin >> nota3;

        media = (nota1 + nota2 + nota3) / 3;

        cout << "MATRICULA: " << matricula << " | NOTA 1: " << nota1 << " | NOTA 2: " << nota2 << " | NOTA 3: " << nota3 << " | MEDIA: " << media << endl;

        cout << "Deseja prosseguir com outro aluno? (S para Sim, N para Não): ";
        cin >> continuar;
    }while (continuar == 'S' || continuar == 's');

    return 0;
}

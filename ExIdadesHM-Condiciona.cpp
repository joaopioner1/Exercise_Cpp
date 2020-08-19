#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ageW1, ageW2, ageM1, ageM2, soma, produto;
    
    cout << "Insira a idade da primeira mulher: ";
    cin >> ageW1;
    cout << "Insira a idade da segunda mulher: ";
    cin >> ageW2;
    cout << "Insira a idade do primeira homem: ";
    cin >> ageM1;
    cout << "Insira a idade do segundo homem: ";
    cin >> ageM2;
    
    if (ageW1 > ageW2 && ageM1 > ageM2) {
        soma = ageW2 + ageM1;
        produto = ageM2 * ageW1;
        cout << "Resultado da soma = " << soma << endl;
        cout << "Resultado do produto = " << produto << endl;
        cout << "Idade da primeira mulher = " << ageW1 << endl;
        cout << "Idade da segunda mulher = " << ageW2 << endl;
        cout << "Idade do primeiro homem = " << ageM1 << endl;
        cout << "Idade do segundo homem = " << ageM2 << endl;
    } else if (ageW1 < ageW2 && ageM1 < ageM2) {
        soma = ageW1 + ageM2;
        produto = ageM1 * ageW2;
        cout << "Resultado da soma = " << soma << endl;
        cout << "Resultado do produto = " << produto << endl;
        cout << "Idade da primeira mulher = " << ageW1 << endl;
        cout << "Idade da segunda mulher = " << ageW2 << endl;
        cout << "Idade do primeiro homem = " << ageM1 << endl;
        cout << "Idade do segundo homem = " << ageM2 << endl;
    } else if (ageW1 < ageW2 && ageM1 > ageM2) {
        soma = ageW1 + ageM1;
        produto = ageM2 * ageW2;
        cout << "Resultado da soma = " << soma << endl;
        cout << "Resultado do produto = " << produto << endl;
        cout << "Idade da primeira mulher = " << ageW1 << endl;
        cout << "Idade da segunda mulher = " << ageW2 << endl;
        cout << "Idade do primeiro homem = " << ageM1 << endl;
        cout << "Idade do segundo homem = " << ageM2 << endl;
    } else if (ageW1 > ageW2 && ageM2 > ageM1) {
        soma = ageW2 + ageM2;
        produto = ageM1 * ageW1;
        cout << "Resultado da soma = " << soma << endl;
        cout << "Resultado do produto = " << produto << endl;
        cout << "Idade da primeira mulher = " << ageW1 << endl;
        cout << "Idade da segunda mulher = " << ageW2 << endl;
        cout << "Idade do primeiro homem = " << ageM1 << endl;
        cout << "Idade do segundo homem = " << ageM2 << endl;
    }

    return 0;
}
/*Escreva um programa que faça a leitura da idade de 2 homens e 2 mulheres
(supondo que as idades do mesmo sexo serão diferentes). O programa deve fazer o
somatório da idade do homem mais velho com a idade da mulher mais nova e o
produto da idade do homem mais novo pela idade da mulher mais velha. Ao final
você deve imprimir os resultados, e cada uma das idades digitadas: mulher mais
nova, mulher mais velha, homem mais novo e homem mais velho.

*/
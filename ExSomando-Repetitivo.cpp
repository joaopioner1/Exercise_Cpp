#include <bits/stdc++.h>

using namespace std;

int main()
{
   double input, soma = 0;

    cout << "Insira quantos numeros quiser, no final sera imprimida a soma tota. \nPara parar o programa, digite 0." << endl;
    while (input != 0) {
        cout << "Insira um numero: ";
        cin >> input;
        soma += input;
    } 
    cout << "Soma total = " << soma;

    return 0;
}

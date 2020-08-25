#include <bits/stdc++.h>

using namespace std;

int main()
{
    int idade;
    
    cout << "Insira a idade do conveniado: ";
    cin >> idade;
    
    if (idade < 10) {
        cout << "Valor a ser pago: R$ 180.00" << endl;
    } else if (idade >= 10 && idade < 40) {
        cout << "Valor a ser pago: R$ 150.00" << endl;
    } else if (idade >= 40 && idade < 60) {
        cout << "Valor a ser pago: R$ 195.00" << endl;
    } else { 
        cout << "Valor a ser pago: R$ 230.00" << endl;   
    }

    return 0;
}

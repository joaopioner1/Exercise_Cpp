#include <bits/stdc++.h>

using namespace std;

int main()
{
    int quantity, input, somaAge;
    
    cout << "Insira a quantidade de idades que deseja somar: ";
    cin >> quantity;
    
    for (int i = 0; i < quantity; i++) {
        cout << "Insira uma idade: ";
        cin >> input;
        somaAge += input;
    }
    cout << "A soma total das idades = " << somaAge << endl;
    
    return 0;
}

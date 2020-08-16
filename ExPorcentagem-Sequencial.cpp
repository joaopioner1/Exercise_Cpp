#include <bits/stdc++.h>

using namespace std;

int main()
{
    double input, porcentagem;
    
    cout << "Insira um número real: ";
    cin >> input;
    
    porcentagem = input * 20.00 / 100;
    
    cout << fixed << setprecision(2);
    cout << "O valor acrescentado com 20 por cento: " << porcentagem + input << endl;
        
    
    
    return 0;   
}

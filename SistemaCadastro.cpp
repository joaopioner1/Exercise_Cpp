#include <bits/stdc++.h>

using namespace std;

int main()
{
    string nameR, emailR, emailL, nameL; 
    int passwordR, passwordL;
    
    cout << "SISTEMA_DE_CADASTRO" << endl;
    cout << "REGISTRO: " << endl;
    cout << "Insira seu nome completo: ";
    getline(cin,nameR);
    cout << "Insira seu e-mail: ";
    getline(cin,emailR);
    cout << "Insira sua senha em numeros: ";
    cin >> passwordR;

    for (int i = 0; i < 50; i++) {
        cout << "--------------------------------------------------------------" << endl;
    }
    
    cout << "LOGIN: " << endl;
    cout << "Insira seu nome completo: ";
    getline(cin,nameL);
    getline(cin,nameL);
    cout << "Insira seu e-mail: ";
    getline(cin,emailL);
    cout << "Insira sua senha em numeros: ";
    cin >> passwordL;
    
    if (nameL == nameR && emailR == emailL && passwordL == passwordR) {
        cout << "Seu login foi efetuado com sucesso!" << endl;
    } else {
        while (nameL != nameR || emailR != emailL || passwordL != passwordR) {
            cout << "Dados incorretos, por favor redigite-os" << endl;
            cout << "LOGIN: " << endl;
            cout << "Insira seu nome completo: ";
            getline(cin,nameL);
            cout << "Insira seu e-mail: ";
            getline(cin,emailL);
            cout << "Insira sua senha em numeros: ";
            cin >> passwordL;
        }
    }
     
    return 0;
}

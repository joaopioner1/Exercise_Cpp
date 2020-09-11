#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, soma = 0;
    double nota, somaN = 0, media;
    
    cout << "CALCULANDO_MEDIA" << endl;
    cout << "Digite a quantidade de notas que deseja inserir: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cout << "Insira uma nota: ";
        cin >> nota;
        somaN += nota;
        soma += 1;
    }
    media = somaN / soma;
    cout << "Media total = " << media << endl;
    return 0;
}

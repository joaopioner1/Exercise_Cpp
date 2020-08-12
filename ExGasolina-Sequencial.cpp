#include <bits/stdc++.h>

 using namespace std;

 
int main () 
{
    double lKm, kmIncial, kmFinal, valorGasolina;
    
    cout << "Insira a quantidade de L que seu carro faz por km: ";
    cin >> lKm;
    cout << ("Insira a quilometragem incial do automovel: ");
    cin >> kmIncial;
    cout << ("Insira a quilometagem final do automovel: ");
    cin >> kmFinal;
    cout << ("Insira o valor da gasolina: ");
    cin >> valorGasolina;
    
    double media = (kmFinal - kmIncial) / lKm;
    double valoPagar = media * valorGasolina / 4;
    
    cout << fixed << setprecision(2);
    cout << "O valor a ser por cada um é: R$ " << valoPagar << endl;
    
    return 0;

}
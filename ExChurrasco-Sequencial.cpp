#include <bits/stdc++.h>

using namespace std;

int main()
{
    int quantH, quantM, quantC;
    
    cout << "Insira a quantidade de mulheres que irão para a festa: ";
    cin >> quantH;
    cout << "Insira a quantidade homens que irão para a festa: ";
    cin >> quantM;
    cout << "Insira a quantidade de crianças que irão para a festa: ";
    cin >> quantC;
    
    double mediaCH = quantH * 400;
    double mediaCM = quantM * 320;
    double mediaCC = quantC * 200;
    double mediaTotal = (mediaCH + mediaCM + mediaCC) / 1000;
    
    cout << "O total de carne que deve ser comprado é: " << mediaTotal << "kg" << endl;
    
    return 0;
}
/*Considere que você deseja uma comemoração especial para o seu aniversário e
assim irá convidar familiares a amigos para um churrasco na sua residência. Você
irá precisar comprar a carne a ser consumida pelos seus convidados, logo precisa
de uma forma de calcular a quantidade certa a ser adquirida.
Desenvolva o algoritmo do programa para auxiliar no cálculo da quantidade de carne
bovina (sem osso) a ser comprada considerando que homens, mulheres e crianças
consomem uma quantidades diferentes de carne.
Consumo de carne médio
(http://www.embaixadordochurrasco.com.br/calculochurrasco):
Homens: 400 gramas
Mulheres: 320 gramas
Crianças: 200 gramas
*Observação: geralmente é adicionada uma margem de segurança na quantidade
de carne a ser comprada para evitar que falte. Adicione uma margem de segurança
de 20% no total de carne a ser adquirida.

*/
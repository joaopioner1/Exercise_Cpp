#include <bits/stdc++.h>

 using namespace std;

int main () 
{
    double valorIngresso;
    int nSocios, nCriancas, nComuns;
    
    cout << "Entre com o valor dos ingressos: ";
    cin >> valorIngresso;
    cout << "Entre com o numero de socios: ";
    cin >> nSocios;
    cout << "Entre com o numero de criancas: ";
    cin >> nCriancas;
    cout << "Entre com o numero de pessoas comuns: ";
    cin >> nComuns;
    
    int publicoTotal = nComuns + nCriancas + nSocios;
    double valorPendente = publicoTotal * valorIngresso;
    
    double desconto = valorIngresso * 30.00 / 100 * nSocios;
    double valorTotal = (valorIngresso * nSocios - desconto) + nComuns * valorIngresso;
    
    cout << fixed << setprecision (2);   
    cout << "Numero total publico: " << publicoTotal << endl;
    cout << "Total arrecadado: R$ " << valorTotal << endl;
    cout << "Total que poderia ser arrecadado a mais: R$ " << valorPendente - valorTotal << endl;
    
    return 0;
}
/*Desenvolva um algoritmo que será utilizado para automatizar o cálculo do público e
da renda total de um evento esportivo. Este evento esportivo possui um valor fixo
cobrado por ingresso, no entanto, os sócios do clube em cujas dependências ocorre
o evento possuem um desconto de 30% no valor do ingresso e as crianças menores
de 10 anos não pagam ingresso. Baseado nos dados acima apresentados o usuário
deverá digitar 4 informações de
entrada para o sistema, são elas:
- Valor de cada ingresso
- Número de pessoas (público do evento) que são sócias do clube
- Número de pessoas (público do evento) não pagantes (menores de 10
anos)
- Número de pessoas (público do evento) pagantes (sem desconto algum)
O algoritmo deverá calcular e exibir o público total do evento, a renda total do evento
e o valor que deixou de ser arrecadada devido aos descontos e isenções.
*/ 

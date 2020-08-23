#include <bits/stdc++.h>

using namespace std;

int main()
{
    double salary, valueEmp, verifc, percent;
    int quantEmp;
    
    cout << "Insira o salario do funcionario: ";
    cin >> salary;
    cout << "Insira o valor do emprestimo: ";
    cin >> valueEmp;
    cout << "Insira a quantidade de parcelas do emprestimo: ";
    cin >> quantEmp;
    
    verifc = valueEmp / quantEmp;
    percent = 30 * salary / 100;
    if (verifc > percent) {
        cout << "O emprestimo nao pode ser concedido. Valor da parcela eh maior que 30%% do salario." << endl;
    } else {
        cout << "O emprestimo pode ser concedido." << endl;
    }
    
    
    
    return 0;
}


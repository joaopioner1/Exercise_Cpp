#include <bits/stdc++.h>

using namespace std;

int main()
{
    int input, soma1 = 0, soma2 = 0; 
    string answer;
    
    cout << "PESQUISA" << endl;
    cout << "Programa criado para calcular a media de quantas pessoas falam ingles." << endl;
    cout << "Insira com quantas pessoas deseja fazer a pesquisa (s para sim e n para nao): ";
    cin >> input;
    
    for (int i = 0; i < input; i++) {
        cin >> answer;
        if (answer == "s") {
            soma1 += 1;
        } else {
            soma2 += 1;
        }
    }
    double percent1 = 100 * soma1 / input;
    double percent2 = 100 * soma2 / input;
   
    cout << "Total de pessoas: " << input << endl;
    cout << "Possuem internet: " << soma1 << " pessoa(s), " <<percent1 << "% do total" <<endl;
    cout << "Nao possuem internet: " << soma2 << " pessoa(s), " <<percent2 << "% do total" <<endl;
    return 0;
}

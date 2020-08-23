#include <bits/stdc++.h>

using namespace std;

int main()
{
    double input;
    
    cout << "Insira um numero para verificar em qual intervalo esta: ";
    cin >> input;
    
    if (input >= 0 && input <= 25) {
        cout << "intervalo [0,25]" << endl;    
    } else if (input > 25 && input <= 50) {
        cout << "intervalo [25,50]" << endl;
    } else if (input > 50 && input <= 75) {
        cout << "intervalo [50,75]" << endl;
    } else if (input > 75 && input <= 100) {
        cout << "intervalo [75,100]" << endl;
    } else {
        cout << "Fora do intervalo." << endl;
    }

    return 0;
}

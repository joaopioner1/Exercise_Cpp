#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, menor;
    
    cout << "Primeiro valor: ";
    cin >> a;
    cout << "Segundo valor: ";
    cin >> b;
    cout << "Terceiro valor: ";
    cin >> c;
    
    if (a < b && a < c) {
        cout << "MENOR = " << a << endl;
    } else if (b < c) {
        cout << "MENOR = " << b << endl;
    } else {
        cout << "MENOR = " << c << endl;
    }
    
    
       

    return 0;
}

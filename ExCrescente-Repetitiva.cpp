#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    
    cout << "Digite dois numeros: " << endl;
    cin >> x >> y; //le os dois
    
    while(x != y) {
        if (x < y) {
            cout << "CRESCENTE!" << endl;
        } else {
            cout << "DECRESCENTE!" << endl;
        }
        
        cout << "Digite outros dois numeros:" << endl;
        cin >> x >> y;
    }
    return 0;
}

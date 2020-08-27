#include <bits/stdc++.h>

using namespace std;

int main()
{
    int input;
    
    cin >> input;
    
    for (int i = 1; i <= 10000; i++) {
        if (i % input == 2) {
            cout << i << endl;
        }
    }
    return 0;
}

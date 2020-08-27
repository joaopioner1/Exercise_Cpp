#include <bits/stdc++.h>

using namespace std;

int main()
{
    int input;
    
    cin >> input;
    
    for (int i = 1; i <= 10; i++) {
        int mul = i * input;
        cout << i << " x " << input << " = " << mul << endl;
    }

    return 0;
}

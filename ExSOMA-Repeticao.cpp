#include <bits/stdc++.h>

using namespace std;

int main()
{
    int input, soma1 = 0, soma2 = 0;
    
   for (int i = 0; i <= 10; i++) {
       cin >> input;
       
       if (input % 2 == 0) {
           soma1 += input;
       } else if (input % 2 != 0) {
           soma2 += input;
       }
   }
   cout << "Soma total dos pares: " << soma1 << endl;
   cout << "Soma total dos impares: " << soma2 << endl;

    return 0;
}

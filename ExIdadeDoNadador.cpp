#include <bits/stdc++.h>

using namespace std;

int main()
{
    int input;
    
    cout << "Insira a idade do nadador: ";
    cin >> input;

    if (input < 9) {
        cout << "A categoria do nadador eh: mirim." << endl;
    } else if (input >= 9 && input < 14) {
        cout << "A categoria do nadador eh: infantil" << endl;
    } else if (input >= 14 && input < 18) {
        cout << "A categoria do nadador eh: juvenul" << endl;
    } else {
        cout << "A categoria do nadador eh: adulto" << endl;
    }
    return 0;
}

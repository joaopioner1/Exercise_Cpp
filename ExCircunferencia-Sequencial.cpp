#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    double r, area, diam, comp;
    
    cout << "Insira o raio da circunferencia: ";
    cin >> r;
    
    area = 3.14 * pow(r,2);
    diam = r * 2;
    comp = 2 * 3.14 * r;
    
    cout << fixed << setprecision(2);
    cout << "Area = " << area << endl;
    cout << "Diametro = " << diam << endl;
    cout << "Comprimento = " << comp << endl;
    
    return 0;
}


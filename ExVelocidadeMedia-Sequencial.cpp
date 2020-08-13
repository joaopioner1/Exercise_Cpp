#include <bits/stdc++.h>

 using namespace std;

 
int main () 
{
  
    double km, tempo;
  
 
    cout << "Insira quantos km foram/serao percorridos: ";
    cin >> km;
    cout << "Insira o tempo em horas do percurso: ";
    cin >> tempo;
    
    double vm = km / tempo;
  
    cout << fixed << setprecision (2);
    cout << "A velocidade media: " << vm << " km/h" << endl;
  
 
 
return 0;

}

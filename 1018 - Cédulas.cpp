#include <iostream>
#include <cmath>
using namespace std;
 
int main() {

int n100, n50, n20, n10, n5, n2, n1;
int valor;

0< valor < 1000000;
cin >> valor;

n100 = valor / 100;

n50 = (valor - (n100 * 100)) / 50;

n20= (valor - ((n100 * 100) + (n50 * 50))) / 20;

n10 = (valor - ((n100 * 100) + (n50 * 50) + (n20 * 20)))/ 10;

n5 = (valor - ((n100 * 100) + (n50 * 50) + (n20 * 20) + (n10 *10))) / 5;

n2 = (valor - ((n100 * 100) + (n50 * 50) + (n20 * 20) + (n10 *10) + (n5 * 5))) / 2;

n1 = (valor - ((n100 * 100) + (n50 * 50) + (n20 * 20) + (n10 *10) + (n5 * 5) + (n2 * 2))) / 1;

cout << valor << endl;
cout << n100 << " nota(s) de R$ 100,00" << endl;
cout << n50 << " nota(s) de R$ 50,00" << endl;
cout << n20 << " nota(s) de R$ 20,00" << endl;
cout << n10 << " nota(s) de R$ 10,00" << endl;
cout << n5 << " nota(s) de R$ 5,00" << endl;
cout << n2 << " nota(s) de R$ 2,00" << endl;
cout << n1 << " nota(s) de R$ 1,00" << endl;


   
   
   
   
   
    return 0;
}
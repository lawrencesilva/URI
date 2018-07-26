#include <iostream>
#include <math.h> 

using namespace std;

int main() {

string nome;
double fixo, montante;
double total;


cin >> nome;

cin >> fixo;

cin >> montante;

total = fixo + (0.15 * montante);

cout.precision(2);
cout << "TOTAL = R$ " << fixed << total << endl;

return 0;
}
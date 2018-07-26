#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	
	int percorrido, distancia, guarda;
	int custoKM, custoPedagio;
	int contador = 0;
	
	cin >> percorrido >> distancia >> custoKM >> custoPedagio;
	
	guarda = distancia;
	while(guarda <= percorrido) {
		guarda += distancia;
		contador++;
	}
	
	cout << (contador * custoPedagio) + (percorrido * custoKM) << endl;
	
	
	
	return 0;
}
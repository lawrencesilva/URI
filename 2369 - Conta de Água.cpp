#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	
	int soma;
	int valor;
	
	cin >> valor;
	
	if(valor >= 101) {
		soma = 7 + 20 + 140;
		soma += 5 * (valor - 100);
	}
	
	else if(valor >= 31) {
		soma = 7 + 20;
		soma += 2 * (valor - 30);
	}
	
	else if(valor >= 11) {
		soma = 7;
		soma += (valor - 10);
	}
	
	else
		soma = 7;
		
		
	cout << soma << endl;
	
	
	return 0;
}
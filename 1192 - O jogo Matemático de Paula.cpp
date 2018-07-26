#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int quantos, valor1, valor2;
	char letra;
	
	cin >> quantos;
	
	while(quantos > 0) {
		cin >> valor1 >> letra >> valor2;
		
		if(valor1 == valor2) {
			cout << valor1 * valor2 << endl;
		}
		
		else if(letra >= 65 && letra <= 90) {
			cout << valor2 - valor1 << endl;
		}
		
		else
			cout << valor1 + valor2 << endl;
		
		
		quantos--;
	}
	
	
	return 0;
}
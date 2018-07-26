#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

	string nome;
	double valor, soma = 0;
	int quantos = 0;
	
	while(getline(cin,nome)) {
		cin >> valor;
		cin.ignore();
		soma += valor;
		quantos++;
	}
	
	cout << fixed << setprecision(1) << soma / quantos << endl;
	
	return 0;
}
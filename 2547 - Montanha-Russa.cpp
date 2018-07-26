#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	
	int amin, amax;
	int quantos;
	int altura, imprime = 0;
	
	while(cin >> quantos >> amin >> amax) {
		while(quantos > 0) {
			cin >> altura;
			if(altura >= amin && altura <= amax)
				imprime++;
			quantos--;	
		}
		cout << imprime << endl;
		imprime = 0;
	}
	
	return 0;
}

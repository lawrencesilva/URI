#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	
	int originais, pessoas, contador = 0, bilhete;
	
	cin >> originais >> pessoas;
	
	while(pessoas != 0 && originais != 0) {
		int guarda[originais];
		
		for(int i = 0; i < originais; i++) {
			guarda[i] = 0;
		}
		
		for(int i = 0; i < pessoas; i++) {
			cin >> bilhete;
			guarda[bilhete - 1]++;
		}
		
		
		for(int i = 0; i < originais; i++) {
			if(guarda[i] > 1) {
				contador++;
			}
		}
		
		cout << contador << endl;
		contador = 0;
		
		cin >> originais >> pessoas;
	}
	
	return 0;
}
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;

int transforma(string s) {
	
	switch(s[2]) {
		case 'd':
			return 0;
			break;
		
		case 'p':
			return 1;
			break;
		
		case 's':
			return 4;
			break;
	}
}



int main() {
	
	string dodo, leo, pepper;
	int d, l, p;
	int soma = 0;
	
	
	while(cin >> dodo >> leo >> pepper) {
		
		d = transforma(dodo);
		l = transforma(leo);
		p = transforma(pepper);
		
		soma = soma + d + l + p;
		
		if( soma == 0 || soma == 3 || soma == 12 || soma == 4 || soma == 2 || soma == 9 || soma == 5) {
			cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
		} 
		
		if(soma == 6 || soma == 8 || soma == 1) {
			if(l == p) {
				cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
			}
			
			if(d == p) {
				cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
			}
			
			if(d == l) {
				cout << "Urano perdeu algo muito precioso..." << endl;
			}
			
		}
		
		soma = 0;
	}
	
	
	
	
	return 0;
}
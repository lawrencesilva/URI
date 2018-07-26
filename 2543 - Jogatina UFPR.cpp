#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	
	int quantos;
	int identificador;
	int resposta = 0;
	int identificador2, jogo;
	
	while(cin >> quantos) {
		cin >> identificador;
		while(quantos > 0) {
			cin >> identificador2 >> jogo;
			if(identificador == identificador2) 
				if(jogo == 0)
					resposta++;
		quantos--;			
		}
		
		cout << resposta << endl;
		resposta = 0;
	}
	
	return 0;
}

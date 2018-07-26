#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	
	int jogadores, jogos, ponto, imprime = 0;
	bool adiciona = true;
	
	cin >> jogadores >> jogos;
	
	while(jogadores > 0) {
		
		for(int i = 0; i < jogos; i++) {
			cin >> ponto;
			if(ponto == 0)
				adiciona = false;
		}
		
		if(adiciona) 
			imprime++;
		
		adiciona = true;
		jogadores--;	
	}
	
	cout << imprime << endl;
	
	return 0;
}
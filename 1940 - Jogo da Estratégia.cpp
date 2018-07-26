#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	int jogadores, jogadas, ponto, maior = 0;
	
	cin >> jogadores >> jogadas;
	
	int pontos[jogadores];
	
	for(int i = 0; i < jogadores; i++)
		pontos[i] = 0;
	
	while(jogadas > 0) {
		for( int i = 0; i < jogadores; i++) {
			cin >> ponto;
			pontos[i] += ponto;
		}
		jogadas--;
	}
	
	for(int i = 0; i < jogadores; i++) 
		if(maior < pontos[i])
			maior = pontos[i];
		
	for(int i = jogadores - 1; i >= 0; i--) {
		if(maior == pontos[i]) {
			cout << i + 1 << endl;
			break;
		}
	}
	
	return 0;
}

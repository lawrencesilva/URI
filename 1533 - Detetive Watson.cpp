#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	
	int suspeitos, maior = 0, salva, grau;
	
	cin >> suspeitos;
	
	while(suspeitos != 0) {
		int quem[suspeitos];
		
		
		for(int i = 0; i < suspeitos; i++) {
			cin >> grau;
			quem[i] = grau;
		}
		
		for(int i = 0; i < suspeitos; i++) {
			if(quem[i] > maior) {
				maior = quem[i];
				salva = i;
			}
		}
		
		quem[salva] = -1;
		maior = 0;
		
		for(int i = 0; i < suspeitos; i++) {
			if(quem[i] > maior) {
				maior = quem[i];
				salva = i;
			}
		}
		
		cout << salva + 1 << endl;
		
		maior = 0;
		cin >> suspeitos;
	}
	
	
	return 0;
}
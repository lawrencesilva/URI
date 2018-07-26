#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

	int tipo, j1, j2, roubou, acusou;
	int ganhador;
	
	cin >> tipo >> j1 >> j2 >> roubou >> acusou;
	
	if(roubou == 1 && acusou == 1) {
		cout << "Jogador " << 2 << " ganha!" << endl;
		return 0;
	}
	if( (roubou == 1 && acusou == 0) || (roubou == 0 && acusou == 1) ) {
		cout << "Jogador " << 1 << " ganha!" << endl;
		return 0;
	}
	
	if(tipo == 1) {
		if((j1 + j2) % 2 == 0)
			ganhador = 1;
		else
			ganhador = 2;	
	}
	
	else {
		if((j1 + j2) % 2 == 0)
			ganhador = 2;
		else
			ganhador = 1;	
	}
	
	cout << "Jogador " << ganhador << " ganha!" << endl;
}
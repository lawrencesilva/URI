#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
		
	int linhas, colunas;
	int lp, cp, la, ca;
	
	while(cin >> linhas >> colunas) {
		
		int matriz[linhas][colunas];
		
		for(int i = 0; i < linhas; i++) {
			for(int j = 0; j < colunas; j++) {
				cin >> matriz[i][j];
				if(matriz[i][j] == 1) {
					la = i + 1;
					ca = j + 1;
				}
				if(matriz[i][j] == 2) {
					lp = i + 1;
					cp = j + 1;
				}
			}
		}
		
		cout << abs(la - lp) + abs(ca - cp) << endl;
	}

	return 0;
}

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	
	int potencia, vezes;
	
	cin.tie(NULL);
	cout.sync_with_stdio(false);
	
	cin >> vezes;
	
	while(vezes > 0) {
		cin >> potencia;
		
		potencia %= 4;
		
		switch(potencia) {
			case 0:
				cout << 1;
				break;
			case 1:
				cout << 7;
				break;
			case 2:
				cout << 9;
				break;
			case 3:
				cout << 3;
				break;	
		}
		cout << "\n";
		vezes--;
	}
	
	
	
	
	return 0;
}
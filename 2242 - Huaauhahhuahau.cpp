#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	string texto;
	char copia[50], inverte[50];
	int anda = 0;
	
	cin >> texto;
	
	for(int i = 0; texto[i] != '\0'; i++) {
		if(texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u') {
			copia[anda] = texto[i];
			anda++;
		}
	}
	
	copia[anda] = '\0';
	
	for(int i = anda - 1, j = 0; i >= 0; i--, j++) 
		inverte[j]  = copia[i];
	
	for(int i = 0; i < anda; i++) {
		if(inverte[i] != copia[i]) {
			cout << "N" << endl;
			return 0;
		}
	}	
	
	cout << "S" << endl;
	
	return 0;
}

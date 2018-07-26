#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
	string entra;
	int quantos, mexe;
	
	cin >> quantos;
	
	while(quantos > 0) {
		
		cin >> entra >> mexe;
		
		for(int i = 0; entra[i] != '\0'; i++) {
			entra[i] -= mexe;
			if(entra[i] < 'A') {
				entra[i] = 'Z' - ('A' - entra[i]) + 1;
			}
		}
		
		cout << entra << endl;
		quantos--;
	}
	
	
	 
	return 0;
}
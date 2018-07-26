#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main() {
	string entrada;
	int soma = 0;
	
	for(int i =0; i < 3; i++) {
		
		getline(cin, entrada);
		
		while(entrada[0] != 'c') {
			
			for(int j = 0; j < 3; j++) {
				if(entrada[j] == '*') {
					soma += pow(2, 2 - j);
				}
			}
			
			getline(cin, entrada);	
		}
		
		
		cout << soma << endl;
		soma = 0;
	}
	
	
	
	
	
	return 0;
}
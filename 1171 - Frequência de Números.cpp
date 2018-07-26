#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int quantos, valor;
	int vetor[2001];
	
	for(int i = 0; i <= 2000; i++)
		vetor[i] = 0;
	
	cin >> quantos;
	
	while(quantos > 0) {
		
		cin >> valor;
		
		vetor[valor]++;
		
		quantos--;
	}
	
	for(int i = 0; i <= 2000; i++) {
		if(vetor[i] != 0) {
			cout << i << " aparece " << vetor[i] << " vez(es)" << endl;
		}	
	}			
	
	
	return 0;
}
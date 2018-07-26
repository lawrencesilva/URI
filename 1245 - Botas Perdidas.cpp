#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	int esquerda[61], direita[61], tamanho, contador = 0;	
	char lado;
	int quantos;
	
	for(int i = 30; i <= 60; i++){
		esquerda[i] = 0;
		direita[i] = 0;
	}
	
	while(cin >> quantos) {
		for(int i = 0; i < quantos; i++) {
			cin >> tamanho >> lado;
			if(lado == 'E')
				esquerda[tamanho]++;
			else
				direita[tamanho]++;	
		}
		
		for(int i = 30; i <= 60; i++){
			while(esquerda[i] > 0 && direita[i] > 0) {
				esquerda[i]--;
				direita[i]--;
				contador++;
			}
		}
		
		cout << contador << endl;
		
		for(int i = 30; i <= 60; i++){
		esquerda[i] = 0;
		direita[i] = 0;
		}

		contador = 0;
	}
	
	
	
	return 0;
}
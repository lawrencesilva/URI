#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int quantos, posic, vezes = 0;
	double notas[7];
	string nome, nomes[100];
	double maior = 0, menor = 10, peso, nota = 0, imprimir[100];
	
	cin >> quantos;

	while(quantos > 0) {
		cin >> nome >> peso;
		for(int i = 0; i < 7; i++) {
			cin >> notas[i];
			if(notas[i] > maior && notas[i] != -1) {
				maior = notas[i];
				posic = i;
			}	
		}
		notas[posic] = -1;
		
		for(int i = 0; i < 7; i++) {
			if(notas[i] < menor && notas[i] != -1) {
				menor = notas[i];
				posic = i;
			}
		}
		
		notas[posic] = -1;
		
		for(int i = 0; i < 7; i++) {
			if(notas[i] != -1)
				nota+= notas[i];
		}
		
		nota *= peso;
		
		nomes[vezes] = nome;
		imprimir[vezes] = nota;
		
		vezes++;
		maior = 0;
		menor = 10;
		nota = 0;
		quantos--;
	}
	for(int i = 0; i < vezes; i++) {
		cout << fixed << setprecision(2) << nomes[i] << " " << imprimir[i] << endl;
	}
	
	return 0;
}
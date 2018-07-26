#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

	double saquet = 0, bloqueiot = 0, ataquet = 0; 
	double saquep, bloqueiop, ataquep; 
	double saqueat = 0, bloqueioat = 0, ataqueat = 0; 
	double saqueap, bloqueioap, ataqueap; 
	int quantos;
	string nome;
	
	cin >> quantos;
	
	while(quantos > 0) {		
		cin >> nome;
		
		cin >> saquep >> bloqueiop >> ataquep;
		saquet += saquep;
		bloqueiot += bloqueiop;
		ataquet += ataquep;
		
		cin >> saqueap >> bloqueioap >> ataqueap;
		saqueat += saqueap;
		bloqueioat += bloqueioap;
		ataqueat += ataqueap;
		
		quantos--;
	}
	
	cout << fixed << setprecision(2) << "Pontos de Saque: " << (saqueat / saquet) * 100 << " %." << endl;
	cout << fixed << setprecision(2) << "Pontos de Bloqueio: " << (bloqueioat / bloqueiot) * 100 << " %." << endl;
	cout << fixed << setprecision(2) << "Pontos de Ataque: " << (ataqueat / ataquet) * 100 << " %." << endl;
	

	return 0;
}

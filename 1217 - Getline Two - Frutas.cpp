#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	int quantos, contadia = 1;
	double valor, peso = 0, total = 0, somapeso = 0;
	string fruta;
	
	cin >> quantos;
	
	double divide = quantos;
	
	
	while(quantos > 0) {
		cin >> valor;
		
		cin.ignore();
		
		total += valor;
		
		getline(cin, fruta);
		
		for(int i = 0; fruta[i] != '\0'; i++) {
			if(fruta[i] == ' ')
				peso++;
		}
		
		peso++;
		
		somapeso += peso;
		
		cout << "day " << contadia << ": " << peso << " kg" << endl;
		
		peso = 0;
		contadia++;
		quantos--;
	}
	
	cout << fixed << setprecision(2) << somapeso/divide << " kg by day" << endl;
	cout << fixed << setprecision(2) << "R$ " << total/divide << " by day" << endl;
	
	
	return 0;
}
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

	int alc, gas, dies, entrada;
	alc = 0;
	gas = 0;
	dies = 0;
	
	cin >> entrada;
	
	while(entrada != 4){
		if(entrada == 1)
			alc++;
		else if(entrada == 2)
			gas++;
		else if(entrada == 3)
			dies++;					
		cin >> entrada;
	}	
	
	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << alc << endl;
	cout << "Gasolina: " << gas << endl;
	cout << "Diesel: " << dies << endl;
	
		
		
	return 0;
}
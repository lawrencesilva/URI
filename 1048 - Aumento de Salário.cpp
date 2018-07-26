#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){


double salario;
cin >> salario;

if(0 <= salario && salario <= 400.00){
	
	cout << fixed << setprecision(2) << "Novo salario: " << salario + (0.15 * salario) << endl;
	cout << fixed << setprecision(2) << "Reajuste ganho: " << 0.15 * salario << endl;
	cout << "Em percentual: 15 %" << endl;	
}

else if(400.1 <= salario && salario <= 800.00){
	cout << fixed << setprecision(2) << "Novo salario: " << salario + (0.12 * salario) << endl;
	cout << fixed << setprecision(2) << "Reajuste ganho: " << 0.12 * salario << endl;
	cout << "Em percentual: 12 %" << endl;		
}

else if(800.01 <= salario && salario <= 1200.00){
	cout << fixed << setprecision(2) << "Novo salario: " << salario + (0.1 * salario) << endl;
	cout << fixed << setprecision(2) << "Reajuste ganho: " << 0.1 * salario << endl;
	cout << "Em percentual: 10 %" << endl;	
}

else if(1200.01 <= salario && salario <= 2000.00){
	cout << fixed << setprecision(2) << "Novo salario: " << salario + (0.07 * salario) << endl;
	cout << fixed << setprecision(2) << "Reajuste ganho: " << 0.07 * salario << endl;
	cout << "Em percentual: 7 %" << endl;		
}

else if(salario > 2000.00){
	cout << fixed << setprecision(2) << "Novo salario: " << salario + (0.04 * salario) << endl;
	cout << fixed << setprecision(2) << "Reajuste ganho: " << 0.04 * salario << endl;
	cout << "Em percentual: 4 %" << endl;	
}



	
	return 0;
}
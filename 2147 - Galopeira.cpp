#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()	{
	
	double guarda;
	string palavra;
	int vezes, contador = 0;
	
	cin >> vezes;
	
	while(vezes > 0)	{
		cin >> palavra;
		for(int i = 0; palavra[i] != '\0'; i++ )	{
			contador++;
		}
		
		guarda = contador;
		
		cout << fixed << setprecision(2) << guarda / 100 << endl;
		contador = 0;
		vezes--;
	}
	
	return 0;
}
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()	{
	
	double vezes, matricula, nota, mvencedor, nvencedor = 0;
	
	cin >> vezes;
	
	while(vezes > 0)	{
		
		cin >> matricula >> nota;
		
		if(nota >= 8.0 && nota > nvencedor)	{
			mvencedor = matricula;
			nvencedor = nota;
		}
		vezes--;	
	}
	if(nvencedor >= 8.0)
		cout << mvencedor << endl;
	else
		cout << "Minimum note not reached" << endl;
	return 0;
}
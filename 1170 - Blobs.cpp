#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()	{
	
	int dias = 0, vezes;
	double comida;
	
	cin >> vezes;
	
	while(vezes > 0)	{
		cin >> comida;
		
		while(comida > 1)	{
			comida /= 2;
			dias++;
		}
		
		cout << dias << " dias" << endl;
		
		dias = 0;
		vezes--;
	}
	
	return 0;
}
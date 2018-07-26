#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void)	{
	
	double matriz[12][12], soma = 0;
	char op;
	int i, j, guarda2 = 0;
	
	cin >> op;
	
	for(i = 0; i < 12; i++)	{
		for(j = 0; j < 12; j++)	{
			cin >> matriz[i][j];
		}
	}
	
	for(i = 1; i < 11; i++)	{
		for(j = 0; j <= guarda2; j++)	{
			soma += matriz[i][j];
		}
		
		if(i >= 6)	{
			guarda2--;
		}
		
		else if(guarda2 == 4)	{
			continue;
		}
		
		else	{
			guarda2++;
		}
	
	}	
	
	if(op == 'S')	{
		cout << fixed << setprecision(1) << soma << endl;
	}
	
	else	{
		cout << fixed << setprecision(1) << soma / 30 << endl;
	}

	return 0;
}
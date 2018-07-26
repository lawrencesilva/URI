#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void)	{
	
	double matriz[12][12], soma = 0;
	char op;
	int i, j, guarda1 = 1, guarda2 = 10;
	
	cin >> op;
	
	for(i = 0; i < 12; i++)	{
		for(j = 0; j < 12; j++)	{
			cin >> matriz[i][j];
		}
	}
	
	for(i = 11; i > 6; i--)	{
		for(j = guarda1; j <= guarda2; j++)	{
			soma += matriz[i][j];
		}
		guarda1++;
		guarda2--;
	}	
	
	if(op == 'S')	{
		cout << fixed << setprecision(1) << soma << endl;
	}
	
	else	{
		cout << fixed << setprecision(1) << soma / 30 << endl;
	}

	return 0;
}
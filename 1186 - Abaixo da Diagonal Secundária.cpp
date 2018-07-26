#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void)	{
	
	double matriz[12][12], soma = 0;
	char op;
	int i, j, guarda = 1;
	
	cin >> op;
	
	for(i = 0; i < 12; i++)	{
		for(j = 0; j < 12; j++)	{
			cin >> matriz[i][j];
		}
	}
	
	for(i = 11; i > 0; i--)	{
		for(j = guarda; j < 12; j++)	{
			soma += matriz[i][j];
		}
		guarda++;
	}	
	
	if(op == 'S')	{
		cout << fixed << setprecision(1) << soma << endl;
	}
	
	else	{
		cout << fixed << setprecision(1) << soma / 66 << endl;
	}

	return 0;
}
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	
	double matriz[12][12], soma = 0;
	int i, j, coluna;
	char op;
	
	cin >> coluna >> op;
	
	for(i = 0; i < 12; i++)	{
		for(j = 0; j < 12; j++)	{
			cin >> matriz[i][j];
		}
	}
	
	for(i = 0; i < 12; i++)	{
		soma += matriz[i][coluna];
	}
	
	if(op == 'S')	{
		cout << fixed << setprecision(1) << soma << endl;
	}
	
	else	{
		cout << fixed << setprecision(1) << soma / 12 << endl;
	}
	
	
	return 0;
}
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()	{
	
	int linhas, colunas;
	
	cin >> linhas >> colunas;
	
	int matriz[linhas][colunas];
	
	for(int i = 0; i < linhas; i++)	{
		for(int j = 0; j < colunas; j++)	{
			cin >> matriz[i][j];
		}
	}
	
	for(int i = 0; i < linhas; i++)	{
		for(int j = 0; j < colunas; j++)	{
			if(matriz[i][j] == 42 && i > 0 && j > 0 && i < linhas - 1 && j < colunas - 1)	{
				if(matriz [i - 1][j - 1] == 7 && matriz [i - 1][j] == 7 && matriz [i - 1][j + 1] == 7 && matriz [i][j - 1] == 7 && matriz [i][j + 1] == 7 && matriz [i + 1][j - 1] == 7 && matriz [i + 1][j] == 7 && matriz [i + 1][j + 1] == 7)	{
					cout << i + 1 << " " << j + 1 << endl;
					return 0;	
				}
			}
		}
	}
	
	cout << 0 << " " << 0 << endl;
	
	
	return 0;
}
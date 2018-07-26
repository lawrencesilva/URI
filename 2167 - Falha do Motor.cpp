#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()	{
	
	int vezes, falha = 0;
	
	cin >> vezes;
	
	int vetor[vezes];
	
	for(int i = 0; i < vezes; i++)	{
		cin >> vetor[i];
	}
	
	for(int i = 1; i < vezes; i++)	{
		if(vetor[i] < vetor[i - 1])	{
			falha = i + 1;
			break;
		}	
	}
	
	cout << falha << endl;
	
	return 0;
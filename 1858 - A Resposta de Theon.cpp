#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	
	int vetor[100];
	int vezes, menor, res;
	
	cin >> vezes;
	
	for(int i = 0; i < vezes; i++)	{
		cin >> vetor[i];
	}
	
	menor = vetor[0];
	
	for(int i = 0; i < vezes; i++)	{
		if(vetor[i] < menor)
			menor = vetor[i];
	}
	
	for(int i = 0; i < vezes; i++)	{
		if(vetor[i] == menor)	{
			res = i+1;
			break;
		}
	}
	
	cout << res << endl;

	return 0;
}
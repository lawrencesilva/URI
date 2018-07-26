#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()	{

	int pulo, canos;
	bool caiu = false;
	
	cin >> pulo >> canos;
	
	int vetor[canos];
	
	for(int i = 0; i < canos; i++)	{
		cin >> vetor[i];
	}
	
	for(int i = 0; i < canos - 1; i++ )	{
		if(vetor[i] + pulo < vetor[i+1] || abs(vetor[i] - vetor[i+1] > pulo))	{
			caiu = true;
			break;
		}
	}
	
	if(caiu)
		cout << "GAME OVER" << endl;
		
	else
		cout << "YOU WIN" << endl;	
	

	return 0;
}
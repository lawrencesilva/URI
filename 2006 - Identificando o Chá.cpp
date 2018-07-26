#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()	{
	
	int vetor[5], cha, contador = 0;
	
	cin >> cha;
	
	for(int i = 0; i < 5; i++)	{
		cin >> vetor[i];
		if(vetor[i] == cha)
			contador++;
	}
	
	cout << contador << endl;
		
	return 0;
}
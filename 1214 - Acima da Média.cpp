#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()	{
	
	double media, porcent, baixo = 0, cima = 0, acima = 0, guarda;
	int casos, pessoas, alunos[1000];
	
	cin >> casos;
	
	while(casos > 0)	{
		cin >> pessoas;
		
		for(int i = 0; i < pessoas; i++)	{
			cin >> alunos[i];
			cima += alunos[i];
			baixo++;
		}
		
		media = cima / baixo;
		
		for(int i = 0; i < pessoas; i++)	{
			if(alunos[i] > media)
				acima++;	
		}
		
		guarda = pessoas;
		
		cout << fixed << setprecision(3) << (acima / pessoas) * 100 << "%" << endl;
		
		baixo = 0;
		cima = 0;
		acima = 0;
		
		casos--;
	}
	
	
	return 0;
}
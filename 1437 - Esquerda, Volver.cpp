#include <iostream>
#include <cmath>

using namespace std;

int main()	{
	
	
	int vezes, contador;
	char comando, volver = 'N';
	
	cin >> vezes;
	
	while(vezes != 0)	{
		
		contador = vezes;
		
		while(contador > 0)	{
			cin >> comando;
			
			if(comando == 'E')	{
				if(volver == 'N')	
					volver = 'O';
				else if(volver == 'O')
					volver = 'S';
				else if(volver == 'S')
					volver = 'L';
				else if(volver == 'L')
					volver = 'N';			
			}
			
			if(comando == 'D')	{
				if(volver == 'N')	
					volver = 'L';
				else if(volver == 'O')
					volver = 'N';
				else if(volver == 'S')
					volver = 'O';
				else if(volver == 'L')
					volver = 'S';			
			}
			contador--;
		}
		
		cout << volver << endl;
		
		volver = 'N';
		
		cin >> vezes;
		
	
	}
	
	
	return 0;
}
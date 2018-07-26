#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
 
int main() {
 	
 	int digitos, caso = 1;
 	double pesos[10], maior = 0;
 	
 	while(cin >> digitos)	{
 		
 		for(int i = 0; i < 10; i++)	{
 			cin >> pesos[i];
		 }
		 
		 cout << "Caso " << caso << ": ";
	
		while(digitos > 0)	{
		 
			for(int i = 0; i < 10; i++)	{
 				if(pesos[i] > maior)	
 					maior = pesos[i];
		 	}
		 	
		 	
		 	for(int i = 0; i < 10; i++)	{
 				if(pesos[i] == maior)	{
 					cout << i;
 					pesos[i] = -1;
 					break;
				 }			
		 
			}
			
			maior = 0;
			digitos--;
 		}
 		
 		cout << endl;
 		caso++;
 		
	 }
 
  
    return 0;
}
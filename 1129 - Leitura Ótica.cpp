#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(void)	{
	
	int vezes, i, j, k, gaba[5], pre;
	bool achou = false, repetiu = false;
	
	cin >> vezes;
	
	while(vezes != 0)	{
		
		for(i = 0; i < vezes; i++)	{
		
			for(j = 0; j < 5; j++)	
				cin >> gaba[j];
			
			
			for(k = 0; k < 5; k++)	{
				if(gaba[k] <= 127 && achou == false && repetiu == false)	{
					pre = k;
					achou = true;
					}
				else if(gaba[k] <= 127 && achou == true && repetiu == false)	{
					pre = 5;
					repetiu = true;
					}
				}
			
			
			if(achou == false)	
				cout << "*" << endl;
			
			else	{
				if(pre == 0)
					cout << "A" << endl;
				if(pre == 1) 
					cout << "B" << endl;
				if(pre == 2)		
					cout << "C" << endl;
				if(pre == 3)	
					cout << "D" << endl;
				if(pre == 4)
					cout << "E" << endl;	
				if(pre == 5)
					cout << "*" << endl;		
			}
			
			achou = false;
			repetiu = false;
		
		
		
		
	}
	
		cin >> vezes;
	}
	
	
	
	
	
	
	return 0;
}
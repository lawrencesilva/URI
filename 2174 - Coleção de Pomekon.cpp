#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()	{
	
	int casos, faltam = 151;
	bool repetiu = false;
	
	cin >> casos;
	
	string pkm[casos];
	
	
	for(int i = 0; i < casos; i++)	{
		cin >> pkm[i];
		
		if(i > 0)	{
			for(int j = 0; j < i; j++)	{
				if(pkm[i] == pkm[j])	{
					repetiu = true;
					break;
				}
			}
		}
		
		
		if(repetiu)	{
			repetiu = false;
			continue;
		}
		else
			faltam--;

	}
	
	cout << "Falta(m) " << faltam << " pomekon(s)." << endl;

	
	return 0;
}

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()	{
	
	int vezes, estado, hora, minuto;
	
	cin >> vezes;
	
	while(vezes > 0)	{
		cin >> hora >> minuto >> estado;
		
		if(hora < 10)
			cout << "0" << hora << ":";
		else
			cout << hora << ":";
			
		if(minuto < 10)	
			cout << "0" << minuto << " - ";
		else	
			cout << minuto << " - ";
			
		if(estado == 0)
			cout << "A porta fechou!" << endl;
		else
			cout << "A porta abriu!" << endl;
		
		vezes--;			
		}
	
	return 0;
}
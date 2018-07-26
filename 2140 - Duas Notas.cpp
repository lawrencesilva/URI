#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()	{
	
	int valor, pago, x;
	
	cin >> valor >> pago;
	
	while(valor !=0 && pago != 0)	{
		
		x = pago - valor;
		
		if(x == 4 || x == 7 || x == 12 || x == 22 || x == 52 || x == 102 || x == 10 || x == 15 || x == 25 || x == 55 || x == 105 || x == 20 || x == 30 || x == 60 || x == 110 || x == 40 || x == 70 || x == 120 || x == 100 || x == 150 || x == 200)
			cout << "possible" << endl;
			
		else 
			cout << "impossible" << endl;
			
		cin >>	valor >> pago;		
	}
	
	return 0;
}
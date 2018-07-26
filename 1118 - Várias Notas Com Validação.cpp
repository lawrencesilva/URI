#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()	{
	
	double a, b, escolha;
	
	while(true)	{
		cin >> a;
		while(a < 0 || a > 10)	{
			cout << "nota invalida" << endl;
			cin >> a;
		}
		
		cin >> b;
		while(b < 0 || b > 10)	{
			cout << "nota invalida" << endl;
			cin >> b;
		}
		
		cout << fixed << setprecision(2) << "media = " << (a + b) / 2 << endl;
		
		cout << "novo calculo (1-sim 2-nao)" << endl;
		cin >> escolha;
		
		while(escolha != 1 && escolha != 2)	{
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> escolha;
		}
		
		if(escolha == 1)
			continue;
		
		if(escolha == 2)
			break;			
}
	
	return 0;
}
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()	{
	
	int casos, num1, num2, num3;
	string j1, escolha1, j2, escolha2, certo;
	
	cin >> casos;
	
	while(casos > 0)	{
		cin >> j1 >> escolha1 >> j2 >> escolha2 >> num1 >> num2;
		num3 = num1 + num2;
		
		if(num3 % 2 == 0)
			certo = "PAR";
			
		else
			certo = "IMPAR";
			
		if(escolha1 == certo)	{
			cout << j1 << endl;
		}		
		
		else
			cout << j2 << endl;
		
		casos--;
	}
	
	return 0;
}
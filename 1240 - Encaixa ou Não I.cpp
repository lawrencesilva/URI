#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()	{
	
	int num1, num2, vezes;
	bool encaixa = true;
	
	cin >> vezes;
	
	while(vezes > 0)	{
		cin >> num1 >> num2;
		
		while(num2 > 0)	{
			if(num1 % 10 != num2 % 10)	{
				encaixa = false;
				break;
			}
			num1 /= 10;
			num2 /= 10;
		}
		
		if(encaixa == false)	{
			cout << "nao encaixa" << endl;
			encaixa = true;	
		}
		
		else	{
			cout << "encaixa" << endl;
		}
		
		
		
		vezes--;
	}
	
	return 0;
}

#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

long long int fatorial(long long int x)	{
	long long int fatorial = 1;
	
	while(x > 1)	{
		fatorial *= x;
		x--;
	}
	
	return fatorial;
}

int main()	{
	
	long long int num1, num2, soma;
	
	while(cin >> num1 >> num2)	{
		soma = fatorial(num1) + fatorial(num2);
		cout << soma << endl;
		
	}

	return 0;
}
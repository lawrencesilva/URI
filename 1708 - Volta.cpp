#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(void)	{
	
	int a, b, volta = 2, a1, b1;
	
	cin >> a >> b;
	a1 = a;
	b1 = b;	
	
	while(b1 - a1 < a)	{
		a1 += a;
		b1 += b;
		volta++;
	}
	
	cout << volta << endl;
	
	
	return 0;
}
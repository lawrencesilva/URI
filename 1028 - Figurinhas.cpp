#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int mdc(int a, int b)	{
	
	while(a > 0 && b > 0)	{
		if(a > b)	
			a %= b;
		else
			b %= a;	
	}
	
	if(a == 0)	
		return b;
		
	else
		return a;	
	
}

int main()	{
	int x, y, vezes;
	
	cin >> vezes;
	
	while(vezes > 0)	{
		cin >> x >> y;		
		cout << mdc(x,y) << endl;
		vezes--;
	}
	
	return 0;
}

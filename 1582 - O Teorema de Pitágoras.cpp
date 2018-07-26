#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <iomanip>

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
	
	int lados[3];
	
	while( scanf("%d%d%d", &lados[0], &lados[1], &lados[2]) != EOF)	{
		
		sort(lados, lados+3);
		
		if(lados[2] * lados[2] != (lados[0] * lados[0]) + (lados[1] * lados[1]))	{
			cout << "tripla" << endl;
			continue;
		}
			
		if( mdc(lados[0], lados[1]) == 1 && mdc(lados[0], lados[2]) && mdc(lados[1], lados[2]) )	{
			cout << "tripla pitagorica primitiva" << endl;
			continue;
		}
		
		cout << "tripla pitagorica" << endl;
		
	}
	
	return 0;
}
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void)	{
	
	int xf, yf, xi, yi, vi, r1, r2, raio;
	double dist, v;
	
	
	while(cin >> xf >> yf >> xi >> yi >> vi >> r1 >> r2)	{
		raio = r1 + r2;
		v = vi;
		dist = sqrt(pow(xi - xf, 2) + pow(yi - yf, 2)) + (1.5 * vi);
		if(raio >= dist)	{
			cout << "Y" << endl;
		}
		else	{
			cout << "N" << endl;
		}
	}	

	return 0;
}
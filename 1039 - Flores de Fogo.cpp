#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(void)	{
	
	int r1, r2, x1, y1, x2, y2;
	double dist;
	
	while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2)	{
		
		
		dist = sqrt(pow(x2-x1,2) + pow(y2 - y1,2));
		
		if((dist + r2) <= r1)	{
			cout << "RICO" << endl;
		}
		else	{
			cout << "MORTO" << endl;
		}
		
	}
	
	
	return 0;
}
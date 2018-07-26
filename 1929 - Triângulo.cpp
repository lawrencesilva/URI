#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main() {
	
	int a, b, c, d;
	bool pode = false;
	
	cin >> a >> b >> c >> d;
	
	if( (a + b > c && a + c > b && b + c > a)   ||   (a + b > d && a + d > b && b + d > a)  || (b + c > d && b + d > c && c + d > b)  || (a + c > d && a + d > c && c + d > a) )    {
		pode = true;
	}
	
	if(pode) 
		cout << "S" << endl;
	
	
	else
		cout << "N" << endl;

	return 0;
}
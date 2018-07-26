#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	
	int d;
	int a, b, c;
	
	cin >> d >> a >> b >> c;
	
	if(d > a || d > b || d > c) {
		cout << "N" << endl;
	}
	
	else 
		cout << "S" << endl;
	
	
	return 0;
}
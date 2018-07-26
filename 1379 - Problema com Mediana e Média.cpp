#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	
	int a, b;
	
	cin >> a >> b;
	
	while(a != 0 && b != 0) {
		cout << (a * 3) - a - b << endl;
		cin >> a >> b;
	}
	
	return 0;
}
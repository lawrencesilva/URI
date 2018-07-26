#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	
	int num;
	int imprime = 0;
	
	while(cin >> num) {
		while(num >= 2) {
			num /= 2;
			imprime++;
		}
		cout << imprime << endl;
		imprime = 0;
	}
	
	return 0;
}

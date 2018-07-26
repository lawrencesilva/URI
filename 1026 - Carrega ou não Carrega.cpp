#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	unsigned valor1, valor2, valor3;
	
	while(cin >> valor1 >> valor2) {
		valor3 = valor1 ^ valor2;
		cout << valor3 << endl;
	}
	
	
	return 0;
}
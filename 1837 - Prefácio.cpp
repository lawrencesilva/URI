#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main() {
	int a, b, r, q, salva;
	
	cin >> a >> b;

	salva = abs(b);
	
	for(int i = 0; i < salva; i++) {
		if((a - i) % b == 0) {
			r = i;
			q = (a-i) / b;
			break;
		}
	}
	
	cout << q << " " << r << endl;

	return 0;
}
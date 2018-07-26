#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	unsigned long long int quantos;
	
	cin >> quantos;

	while(quantos != -1) {
		if(quantos == 0) {
			cout << 0 << endl;
		}
		else {
		cout << quantos - 1 << endl;
		}
		cin >> quantos;
	}
	
	return 0;
}
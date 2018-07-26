#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void converte(int n) {
	
	
	if(n < 10) {
		cout << n;
		return;
	}
	
	switch(n) {
		case 10:
			cout << "A";
			break;
		case 11:
			cout << "B";
			break;
		case 12:
			cout << "C";
			break;
		case 13:
			cout << "D";
			break;
		case 14:
			cout << "E";
			break;
		case 15:
			cout << "F";
			break;					
	}
	
	return;
}

void hexa(int n) {
	
	if(n / 10 == 0) {
		n %= 16;
		if(n != 0) 
			converte(n);
			
		return;
	}
	
	hexa(n/16);
	
	converte(n % 16);
	
	return;
}


int main() {
	int n;
	
	cin >> n;
	
	hexa(n);
	
	cout << endl;

	
	return 0;
}
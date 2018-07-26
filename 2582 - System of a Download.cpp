#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int quantos;
	int num1, num2, soma = 0;
	
	cin >> quantos;

	while(quantos > 0) {
		cin >> num1 >> num2;
		soma = num1 + num2;
		switch(soma) {
			case 0:
				cout << "PROXYCITY" << endl;
				break;
			case 1:
				cout << "P.Y.N.G." << endl;
				break;
			case 2:
				cout << "DNSUEY!" << endl;
				break;
			case 3:
				cout << "SERVERS" << endl;
				break;
			case 4:
				cout << "HOST!" << endl;
				break;
			case 5:
				cout << "CRIPTONIZE" << endl;
				break;
			case 6:
				cout << "OFFLINE DAY" << endl;
				break;
			case 7:
				cout << "SALT" << endl;
				break;
			case 8:
				cout << "ANSWER!" << endl;
				break;
			case 9:
				cout << "RAR?" << endl;
				break;
			default:
				cout << "WIFI ANTENNAS" << endl;
				break;									
		}
		soma = 0;
		quantos--;
	}
	
	return 0;
}
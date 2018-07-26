#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	
	int dias, feedbacks, numero;
	
	cin >> dias;
	
	for(int i = 0; i < dias; i++) {
		cin >> feedbacks;
		for(int j = 0; j < feedbacks; j++) {
			cin >> numero;
			switch(numero) {
				case 1:
					cout << "Rolien" << endl;
					break;
				case 2:
					cout << "Naej" << endl;
					break;
				case 3:
					cout << "Elehcim" << endl;
					break;
				case 4:
					cout << "Odranoel" << endl;
					break;	
			}
		}
	}
	
	
	return 0;
}
#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main() {
	
	for(int i = 0; i < 39; i++) {
		cout << "-";
	}
	
	cout << endl;
	
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 39; j++) {
			if(j == 0 || j == 38) {
				cout << "|";
			}
			else 
				cout << " ";
		}
		cout << endl;	
	}
	
	for(int i = 0; i < 39; i++) {
		cout << "-";
	}
	
	cout << endl;

	return 0;
}
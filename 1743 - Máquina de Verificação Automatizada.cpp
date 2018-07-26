#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	
	bool falso = false;
	
	int um[5], dois[5];
	
	for(int i = 0; i < 5; i++) {
		cin >> um[i];
	}
	
	for(int i = 0; i < 5; i++) {
		cin >> dois[i];
	}
	
	for(int i = 0; i < 5; i++) {
		if(um[i] == dois[i]) {
			falso = true;
		}
	}
	
	if(falso) 
		cout << "N" << endl;
	
	else
		cout << "Y" << endl;
	
	return 0;
}	
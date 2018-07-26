#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	
	int quantos, contador = 0;
	int latas, copos;
	
	cin >> quantos;
	
	while(quantos > 0) {
		cin >> latas >> copos;
		
		if(latas > copos) {
			contador += copos;
		}
		
		quantos--;
	}
	
	cout << contador << endl;
	
	
	return 0;
}
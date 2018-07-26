#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
		
	string alfabeto;
	int quantas;
	int pisca;
	
	while(cin >> alfabeto) {
		cin >> quantas;
		
		while(quantas > 0) {
			cin >> pisca;
			cout << alfabeto[pisca - 1];
			quantas--;
		}
		
		cout << endl;
		
	}
	

	return 0;
}

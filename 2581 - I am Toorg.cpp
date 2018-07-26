#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int quantos;
	string entrada;
	cin >> quantos;
	cin.ignore();
	while(quantos > 0) {
		getline(cin, entrada);
		cout << "I am Toorg!" << endl;
		quantos--;
	}
	
	return 0;
}
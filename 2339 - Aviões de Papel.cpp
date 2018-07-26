#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	
	int alunos, folhas, quanto;
	
	cin >> alunos >> folhas >> quanto;
	
	if(alunos * quanto > folhas) {
		cout << "N" << endl;
	}
	
	else {
		cout << "S" << endl;
	}
	
	return 0;
}
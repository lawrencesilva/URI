#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	
	int quantas, capacidade, dentro = 0, saiu, entrou;
	bool encheu = false;
	
	cin >> quantas >> capacidade;
	
	while(quantas > 0) {
		cin >> saiu >> entrou;
		
		dentro -= saiu;
		dentro += entrou;
	
		if(dentro > capacidade)
			encheu = true;
		
		quantas--;
	}
	
	if(encheu) {
		cout << "S" << endl;
	}
	
	else
		cout << "N" << endl;
	
	return 0;
}
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	
	int quantas, lesma, maior, guarda;
	
	while(cin >> quantas) {
		guarda = quantas;
		maior = 0;
		
		while(quantas > 0) {
			cin >> lesma;
			if(lesma > maior)
				maior = lesma;
			quantas--;		
		}
		
		if(maior < 10)
			cout << 1 << endl;
		else if(10 <= maior && maior < 20)
			cout << 2 << endl;
		else
			cout << 3 << endl;		
	}
	
	
	
	return 0;
}
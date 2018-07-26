#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	
	double cima = 0, baixo = 0;
	int quantas;
	double n, c;
	
	while(cin >> quantas) {
		while(quantas > 0) {
			cin >> n >> c;
			cima += n * c;
			baixo += c;
			quantas--;
		}
		
		baixo *= 100;
		
		cout << fixed << setprecision(4) << cima / baixo << endl;
		cima = 0;
		baixo = 0;
	}

	return 0;
}

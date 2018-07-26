#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;

int max(float r, float g, float b) {
	
	if(r - g >= 0 && r - b >= 0) {
		return r;
	}
	
	if(g - r >= 0 && g - b >= 0) {
		return g;
	}
	
	if(b - g >= 0 && b - r >= 0) {
		return b;
	}
	
}

int min(float r, float g, float b) {
	
	if(r - g <= 0 && r - b <= 0) {
		return r;
	}
	
	if(g - r <= 0 && g - b <= 0) {
		return g;
	}
	
	if(b - g <= 0 && b - r <= 0) {
		return b;
	}
		
}

int resolve(float r, float g, float b, string metodo) {
	
	int volta;
	
	switch(metodo[1]) {
		case 'y':
			volta = (0.3 * r) + (0.59 * g) + (0.11 * b);
			break;
			
		case 'e':
			volta = (r + g + b) / 3;
			break;
		
		case 'a':
			volta = max(r, g, b);
			break;
		
		case 'i':
			volta = min(r, g, b);
			break;
	}

	return volta;	
}


int main() {
	
	string metodo;
	float quantos, r, g, b, resultado;
	
	cin >> quantos;
	
	
	for(int i = 0; i < quantos; i++) {
		
		cin >> metodo;
		cin >> r >> g >> b;
		
		resultado = resolve(r, g, b, metodo);
		
		cout << "Caso #" << i + 1 << ": " << resultado << endl;
	}	
		
	return 0;
}
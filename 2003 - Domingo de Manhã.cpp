#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

	int horas, minutos;
	char pontos;
	
	while(cin >> horas >> pontos >> minutos) {
		
		if(horas < 7) {
			cout << "Atraso maximo: 0" << endl;
			continue;	
		}
		
		if(horas < 8 && minutos == 0) {
			cout << "Atraso maximo: 0" << endl;
			continue;
		}
		
		if(horas < 8) {
			cout << "Atraso maximo: " << minutos << endl;
			continue;
		}
		
		if(horas == 8) {
			cout << "Atraso maximo: " << minutos + 60 << endl;
			continue;
		}	
		
		if(horas == 9) {
			cout << "Atraso maximo: " << 120 << endl;
			continue;
		}
				
	}

}

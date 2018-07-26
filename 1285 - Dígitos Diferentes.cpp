#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

	int a, b, guarda, elimina = 0, adentra, guardaf;
	int v[10];
	
	for(int i = 0; i < 10; i++) 
		v[i] = 0;
	
	while(cin >> a >> b) {
		guardaf = a;
		while(a <= b) {
			guarda = a;
			
			while(guarda > 0) {
				adentra = guarda % 10;
				v[adentra]++;
				guarda /= 10;
			}
		
			for(int i = 0; i < 10; i++) 
				if(v[i] > 1) {
					elimina++;
					break;
				}
			a++;	
			for(int i = 0; i < 10; i++) 
			v[i] = 0;	
		}
		
		cout << (b - guardaf - elimina) + 1 << endl;
		elimina = 0;
			
	}
	
	return 0;
}

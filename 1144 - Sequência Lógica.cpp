#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

	int x, contador;
	
	
	contador = 2;
	
	cin >> x;
	
	cout << 1 << " " << 1 << " " << 1 << endl;
	cout << 1 << " " << 2 << " " << 2 << endl;	
	
	while(contador <= x){
		cout << contador << " " << contador * contador << " " << contador * contador * contador << endl;
		cout << contador << " " << contador * contador + 1 << " " << contador * contador * contador + 1 << endl;
		contador++;
	}
	
	return 0;
}
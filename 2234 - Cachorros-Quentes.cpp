#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	
	int a, b;
	double cima, baixo;
	
	cin >> a >> b;
	
	cima = a;
	baixo = b;
	
	
	cout << fixed << setprecision(2) << cima/baixo << endl;
	

	return 0;
}
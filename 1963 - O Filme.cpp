#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()	{
	
	double antigo, novo;
	
	cin >> antigo >> novo;
	
	cout << fixed << setprecision(2) << ((novo - antigo) / antigo) * 100 << "%" << endl;
	
	return 0;
}
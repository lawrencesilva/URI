#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>


using namespace std;


int main()	{
	
	int vezes, rafael, beto, carlos, x, y, guarda[3];
	
	cin >> vezes;
	
	while(vezes > 0)	{
		cin >> x >> y;
		
		rafael = pow(3 * x, 2) + pow(y,2);
		beto = (2 * pow(x, 2)) + pow(5 * y, 2);
		carlos = (-100 * x) + pow(y, 3);
		
		guarda[0] = rafael;
		guarda[1] = beto;
		guarda[2] = carlos;
		
		sort(guarda, guarda + 3);
		
		if(guarda[2] == rafael)
			cout << "Rafael ganhou" << endl;
		else if(guarda[2] == carlos)
			cout << "Carlos ganhou" << endl;
		else
			cout << "Beto ganhou" << endl;		 
		vezes--;
	}
		
		
		
	

	return 0;
}
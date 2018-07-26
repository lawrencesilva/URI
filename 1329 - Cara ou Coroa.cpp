#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	
	int x, vezes, contador, maria, joao;
	
	contador = 0;
	maria = 0;
	joao = 0;
	
	
	cin >> vezes;
	
	if(vezes == 0)
		return 0;
	
	while(contador < vezes){
		cin >> x;
		if(x == 0)
			maria++;
		else if(x == 1)
			joao++;	
		contador++;
	}
	
	cout << "Mary won " << maria << " times and John won " << joao << " times" << endl;

		
	
	main();
}
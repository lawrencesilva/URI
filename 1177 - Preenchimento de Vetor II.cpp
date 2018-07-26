#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	
	int vet[1010], num, contador = 0;
	                                        
	cin >> num;
	
	while(contador < 1000){
		for(int j = 0; j < num; j++){
			vet[contador] = j;
			contador++;
		}
	}
	
	for(int i = 0; i < 1000; i++){
		cout << "N[" << i << "] = " << vet[i] << endl;
	}
	
	
	return 0;	
}
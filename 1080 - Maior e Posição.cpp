#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	
	int num[101];
	int x = 0, posic = 1;
	
	for(int i = 1; i <= 100; i++){
		cin >> num[i];
		if(num[i] > x){
			x = num[i];
			posic = i;
		}
	}

	cout << x << endl;
	cout << posic << endl;
	
	return 0;
}
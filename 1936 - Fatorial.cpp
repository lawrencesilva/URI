#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int fatorial(int x) {
	if(x == 1) {
		return 1;
	}
	
	return x * fatorial(x-1);
}

int main() {
	
	int guarda[8];
	
	for(int i = 0, j = 1; i < 8; i++, j++) 
		guarda[i] = fatorial(j);
	
	int num, k = 7, imprime = 0;
	
	cin >> num;
	
	while(num !=0) {
		while(num >= guarda[k])  {
			num -= guarda[k];
			imprime++;
		}
		k--;		
	}
	
	cout << imprime << endl;
	
	
	return 0;
}

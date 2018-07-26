#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void)	{
	
	int vezes, num;
	
	cin >> vezes;
	
	while(vezes > 0)	{
		cin >> num;
		if(num % 2 ==0)	{
			cout << 0 << endl;
		}
		else {
			cout << 1 << endl;
		}
		vezes--;
	}

	return 0;
}
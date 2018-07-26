#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()	{
	
	int num, casos;
	
	cin >> casos;
	
	while(casos > 0)	{
		cin >> num;
		
		if(num %2 == 0)	
			cout << "1" << endl;
		
		else
			cout << "9" << endl;
			
		casos--;
	}
	
	return 0;	
}
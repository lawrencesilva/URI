#include <iostream>
#include <cmath>

using namespace std;

int main()	{
	
	int contador;
	int num;
	bool primo = true;
	
	cin >> contador;
	
	while(contador > 0)	{
		
		cin >> num;
		
		if(num == 2 || num == 1)	{
			if(num == 2)
				cout << "Prime" << endl;
			if(num == 1)
				cout << "Not Prime" << endl;
			contador--;
			continue;				
		}
		
		for(int i = 2; i <= sqrt(num); i++)	{
			if(num % i == 0)	{
				primo = false;
				break;
			}	
		}
		
		if(primo)
			cout << "Prime" << endl;
		else
			cout << "Not Prime" << endl;
		
		primo = true;		
			
			
		contador--;		
	}
	
	
	
	return 0;
}
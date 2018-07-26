#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main()	{

	int a, b, j1 = 0, j2 = 0, vezes;
	
	
	while(true)	{
		
		cin >> vezes;
		
		if(vezes == 0)	
			break;
		
		for(int i = 0; i < vezes; i++)	{
			cin >> a >> b;
			if(a > b)
				j1++;
			if(b > a)
				j2++;	
		}
		
		cout << j1 << " " << j2 << endl;
		
		j1 = 0;
		j2 = 0;
			
	}

	
	
	return 0;
}
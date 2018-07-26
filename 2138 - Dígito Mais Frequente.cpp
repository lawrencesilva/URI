#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()	{
	
	string num;
	
	int nuns[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, maior = 0, freq;
	
	
	
	while(cin >> num)	{
	
		for(int i = 0; num[i] != '\0'; i++)	{
			if(num[i] == '0')
				nuns[0]++;
			else if(num[i] == '1')
				nuns[1]++;	
			else if(num[i] == '2')
				nuns[2]++;
			else if(num[i] == '3')
				nuns[3]++;
			else if(num[i] == '4')
				nuns[4]++;
			else if(num[i] == '5')
				nuns[5]++;
			else if(num[i] == '6')
				nuns[6]++;
			else if(num[i] == '7')
				nuns[7]++;
			else if(num[i] == '8')
				nuns[8]++;
			else if(num[i] == '9')
				nuns[9]++;								
		}
	
		for(int i = 0; i < 10; i++)	{
			if(nuns[i] > maior)	{
				maior = nuns[i];
				freq = i;
			}
		}
	
		for(int i = 9; i >= 0; i--)	{
			if(nuns[i] == maior)	{	
				freq = i;
				break;
			}
		}
	
		cout << freq << endl;
		
		for(int i = 0; i < 10; i++)	{
			nuns[i] = 0;
		}
		
		maior = 0;
}
	
	
	
	return 0;
}
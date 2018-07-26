#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void)	{
	
	int num;
	
	cin >> num;
	
	while(!cin.eof())	{
		if(num > 0)	{
			cout << "vai ter duas!" << endl;
		}
		else	{
			cout << "vai ter copa!" << endl;
		}
		cin >> num;
	}

	return 0;
}
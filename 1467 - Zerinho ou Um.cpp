#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main()	{

	int a, b, c;
	
	
	while(cin >> a >> b >> c)	{
		
		if(a == b && b == c)	
			cout << "*" << endl;
		
		else if(a == b && b != c)
			cout << "C" << endl;
			
		else if(a == c && c != b)
			cout << "B" << endl;		
		
		else if(c == b && b != a)
			cout << "A" << endl;	
	}

	
	
	return 0;
}
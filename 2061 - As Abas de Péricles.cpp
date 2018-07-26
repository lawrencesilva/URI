#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()	{
	
	string action;
	int abas, contador;
	
	cin >> abas >> contador;
	
	while(contador > 0)	{
		cin >> action;
		
		if(action == "fechou")
			abas ++;
		
		else
			abas--;	

		contador--;		
	}
	
	cout << abas << endl;
		
	
	
	return 0;
}
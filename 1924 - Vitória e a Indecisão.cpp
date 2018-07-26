#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()	{
	
	string curso;
	int vezes;
	
	cin >> vezes;
	
	while(vezes >= 0)	{
		getline(cin, curso);
		
		vezes--;
	}
	
	cout << "Ciencia da Computacao" << endl;
	
	return 0;
}
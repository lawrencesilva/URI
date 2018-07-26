#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()	{
	
	string nome;
	int contador;
	
	getline(cin, nome);

	for(contador = 0; nome [contador] != '\0'; contador++)	{
		
	}
	
	if(contador > 80)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;	
	
	
	return 0;
}
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
	
	if(contador > 140)
		cout << "MUTE" << endl;
	else
		cout << "TWEET" << endl;	
	
	
	return 0;
}
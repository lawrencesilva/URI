#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main(void)	{
	
	int vezes, contador = 1;
	string shel, raj;
	
	cin >> vezes;
	
	while(vezes > 0)	{
		cin >> shel >> raj;
		if(shel == "papel")	{
			if(raj == "papel")	{
				cout << "Caso #" << contador << ": De novo!" << endl;
			}
			if(raj == "pedra" || raj == "Spock")	{
				cout << "Caso #" << contador << ": Bazinga!" << endl;
			}
			if(raj == "tesoura" || raj == "lagarto")	{
				cout << "Caso #" << contador << ": Raj trapaceou!" << endl;
			}	
		}
		
		if(shel == "pedra")	{
			if(raj == "pedra")	{
				cout << "Caso #" << contador << ": De novo!" << endl;
			}
			if(raj == "lagarto" || raj == "tesoura")	{
				cout << "Caso #" << contador << ": Bazinga!" << endl;
			}
			if(raj == "papel" || raj == "Spock")	{
				cout << "Caso #" << contador << ": Raj trapaceou!" << endl;
			}	
		}
		
		if(shel == "tesoura")	{
			if(raj == "tesoura")	{
				cout << "Caso #" << contador << ": De novo!" << endl;
			}
			if(raj == "papel" || raj == "lagarto")	{
				cout << "Caso #" << contador << ": Bazinga!" << endl;
			}
			if(raj == "pedra" || raj == "Spock")	{
				cout << "Caso #" << contador << ": Raj trapaceou!" << endl;
			}	
		}
		
		if(shel == "lagarto")	{
			if(raj == "lagarto")	{
				cout << "Caso #" << contador << ": De novo!" << endl;
			}
			if(raj == "Spock" || raj == "papel")	{
				cout << "Caso #" << contador << ": Bazinga!" << endl;
			}
			if(raj == "tesoura" || raj == "pedra")	{
				cout << "Caso #" << contador << ": Raj trapaceou!" << endl;
			}	
		}
		
		if(shel == "Spock")	{
			if(raj == "Spock")	{
				cout << "Caso #" << contador << ": De novo!" << endl;
			}
			if(raj == "pedra" || raj == "tesoura")	{
				cout << "Caso #" << contador << ": Bazinga!" << endl;
			}
			if(raj == "papel" || raj == "lagarto")	{
				cout << "Caso #" << contador << ": Raj trapaceou!" << endl;
			}	
		}
		
		vezes--;
		contador++;
	}

	return 0;
}
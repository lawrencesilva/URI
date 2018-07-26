#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;
 
int main() {
 	
 	double tempo[3], o, b, i;
 	
 	for(int i = 0; i < 3; i++)	{
 		cin >> tempo[i];
	 }
	 
	o = tempo[0];
	b = tempo[1];
	i = tempo[2];
 	
 	sort(tempo, tempo + 3);
 	
 	if(tempo[0] == tempo[1])	{
 		cout << "Empate" << endl;
 		return 0;
	 }
	 
	else {
		if(tempo[0] == o)
			cout << "Otavio" << endl;
		else if(tempo[0] == b)
			cout << "Bruno" << endl;
		else if(tempo[0] == i)
			cout << "Ian" << endl;		
	}
 
  
    return 0;
}
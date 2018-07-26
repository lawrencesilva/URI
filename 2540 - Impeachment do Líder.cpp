#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	
	double doistercos, membrosd;
	int membros;
	int votaram = 0, voto;
	
	while(cin >> membros) {
		membrosd = membros;
		doistercos = (membrosd / 3) * 2;
		while(membros > 0) {
			cin >> voto;
			if(voto == 1)
				votaram++;
			membros--;	
		}
		
		if(votaram >= doistercos)
			cout << "impeachment" << endl;
		else
			cout << "acusacao arquivada" << endl;
			
		votaram = 0;
	}
	

	return 0;
}

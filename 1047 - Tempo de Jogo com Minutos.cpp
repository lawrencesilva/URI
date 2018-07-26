#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()  {

    int beginh, beginm, finishh, finishm;
    int begint, finisht, total;

    cin >> beginh >> beginm >> finishh >> finishm;

    begint = (60 * beginh) + beginm;

    finisht = (60 * finishh) + finishm;

    if(begint > finisht) 
		total = 1440 - (begint - finisht);
	else if(begint < finisht)
		total = finisht - begint;
	else {
		cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
        return 0;
	}
	
    cout << "O JOGO DUROU " << total / 60 << " HORA(S) E " << total % 60 << " MINUTO(S)" << endl;

    return 0;
}

#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

int main(void)	{
	
	int vetor[3], i;
//	bool igual = false;
	
	cin >> vetor[0] >> vetor[1] >> vetor[2];
	
	sort(vetor, vetor + 3);
	
	if((vetor[0] == vetor[1] || vetor[0] == vetor[2] || vetor[1] == vetor[2]) || vetor[0] + vetor[1] == vetor[2])	{
		cout << "S" << endl;
		return 0;	
	}
	
	
	cout << "N" << endl;
	
	return 0;
}
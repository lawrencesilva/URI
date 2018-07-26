#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()	{
	
	int saida, tempo, fuso, final;
	
	cin >> saida >> tempo >> fuso;
	
	final = saida + tempo + fuso;
	
	if(final >= 24)	
		final = final - 24;
	
	
	if(final < 0)
		final = 24 + final;
	
	cout << final << endl;
	
	return 0;
}
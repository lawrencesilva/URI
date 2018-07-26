#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>

using namespace std;

int main()	{
	
	double a, b;
	int contador = 1;
	
	while(scanf("%lf%lf", &a, &b) != EOF)	{
		cout << "Projeto " << contador << ":" << endl;
		//cout << fixed << setprecision(2) << "Percentual dos juros da aplicacao: " << ((b - a) / a) * 100 << " %" << endl;
		printf("Percentual dos juros da aplicacao: %.2lf %\n", ((b-a) / a) * 100);
		contador++;
		cout << endl;
	}
		
	
	
	return 0;
}
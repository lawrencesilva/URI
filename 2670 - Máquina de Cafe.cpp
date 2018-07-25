#include <iostream>
#include <iomanip>
#include <cstdlib>>
#include <string>
#include <cmath>

using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}


int main() {
	
	int a, b, c, r1, r2, r3;
	
	
	cin >> a >> b >> c;
	
	r1 = 4 * c + 2 * b;
	r2 = 2 * a + 2 * c;
	r3 = 4 * a + 2 * b;
	
	int guarda[] = {r1, r2, r3};
	
	qsort(guarda, 3, sizeof(int), compare);
	
	if(guarda[0] == r1) 
		cout << r1;
	
	else if(guarda[0] == r2)
		cout << r2;
	
	else
		cout << r3;	
	
	
	cout << endl;	
	
	
	return 0;
}
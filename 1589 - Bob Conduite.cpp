#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()  {

   int vezes, r1, r2;
   
   cin >> vezes;
   
   while(vezes > 0) {
	   cin >> r1 >> r2;
	   cout << r1 + r2 << endl;
	   vezes--;
   }

    return 0;
}

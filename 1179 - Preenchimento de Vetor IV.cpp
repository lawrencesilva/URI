#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()  {

  int par[5], impar[5];
  int num, p = 0, im = 0;
  
  for(int i = 0; i < 15; i++) {
	  cin >> num;
	  
	  if(num % 2 == 0) {
		  if(p == 5) {
			  for(int j = 0; j < 5; j++) {
				  cout << "par[" << j << "] = " << par[j] << endl;
			  }
			  p = 0;
		  }
		  
		  par[p] = num;
		  p++;
	  }
	  
	  else {
		  if(im == 5) {
			  for(int k = 0; k < 5; k++) {
				  cout << "impar[" << k << "] = " << impar[k] << endl;
			  }
			  im = 0;
		  }
		  
		  impar[im] = num;
		  im++;
	  }   
  }
  
  
  for(int i = 0; i < im; i++) {
	  cout << "impar[" << i << "] = " << impar[i] << endl;
  }
  
  for(int i = 0; i < p; i++) {
	  cout << "par[" << i << "] = " << par[i] << endl;
  }
  
	  
  

    return 0;
}

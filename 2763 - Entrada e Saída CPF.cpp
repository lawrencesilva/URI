#include <iostream>
#include <string>

using namespace std;


int main() {
	
	string a;
	
	while(cin >> a) {
		
		for(int i = 0; i < 14; i++) {
			
			if(i == 3 || i == 7 || i == 11) {
				cout << endl;
				continue;
			}
			
			
			cout << a[i];
			
			
		}
		
		cout << endl;
	}
	
	
	
	return 0;
}
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main(){
	
	int m_2 = 0, m_3 = 0, m_4 = 0, m_5 = 0;
	int x, num;
	
	cin >> x;
	
	while(x > 0){
		cin >> num;
		if(num % 2 == 0)
			m_2++;
		if(num % 3 == 0)
			m_3++;
		if(num % 4 == 0)
			m_4++;	
		if(num % 5 == 0)
			m_5++;		
		x--;	
	}
	
	cout << m_2 << " Multiplo(s) de 2" << endl;
	cout << m_3 << " Multiplo(s) de 3" << endl;
	cout << m_4 << " Multiplo(s) de 4" << endl;
	cout << m_5 << " Multiplo(s) de 5" << endl;
	

	return 0;
}
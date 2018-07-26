#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
	
	int di, hi, mi, si, df, hf, mf, sf, dr, hr, mr, sr, guardai, guardaf, guardar;
	string muda;
	
	cin >> muda  >> di;
	cin >> hi >> muda >> mi >> muda >> si;
	cin >> muda >> df;
	cin >> hf >> muda >> mf >> muda >> sf;
	
	guardai = si + (mi * 60) + (hi * 60 * 60) + (di * 60 * 60 * 24);
	guardaf = sf + (mf * 60) + (hf * 60 * 60) + (df * 60 * 60 * 24);
	guardar = guardaf - guardai;
	
	dr = guardar / (60 * 60 * 24);
	guardar %= (60 * 60 * 24);
	hr = guardar / (60 * 60);
	guardar %= (60 * 60);
	mr = guardar / (60);
	guardar %= (60);
	sr = guardar;
	
	
	cout << dr << " dia(s)\n" << hr << " hora(s)\n" << mr << " minuto(s)\n" << sr << " segundo(s)" << endl; 
	
	return 0;
}
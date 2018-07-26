#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main(void)  {
    
    int linha, i, j;
    double mat[12][12], soma = 0;
    char t;
    
    cin >> linha;
    
    cin >> t;
    
    for(i = 0; i <= 11; i++) {
        for(j = 0; j <= 11; j++)  {
            cin >> mat[i][j];
        }
    }    
    
    
    for(i = 0; i < 12; i++) {
        soma += mat[linha][i];
    }
    
    if(t == 'S')    {
        cout << fixed << setprecision(1)<< soma << endl;
    }
        
    if(t == 'M')    {
        cout << fixed << setprecision(1) << soma / 12 << endl;
    }
        
            

    return 0;
}


#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main(void)  {
    
    double produto, qtd, contador, valor = 0;
    
    cin >> contador;
    
    while(contador > 0) {
        cin >> produto >> qtd;
        if(produto == 1001)     {
            valor += qtd * 1.5;
        }
        if(produto == 1002)     {
            valor += qtd * 2.5;
        }
        if(produto == 1003)     {
            valor += qtd * 3.5;
        }
        if(produto == 1004)     {
            valor += qtd * 4.5;
        }
        if(produto == 1005)     {
            valor += qtd * 5.5;
        }
        contador--;
    }
    
    cout << fixed << setprecision(2) << valor << endl;
        
            

    return 0;
}


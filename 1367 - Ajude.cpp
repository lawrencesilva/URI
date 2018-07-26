#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()  {

    string acerto;
    char questao;
    int contador, s = 0, p = 0, tempo, c2;
    int acertos[26], errados[26];


    cin >> contador;

    while(contador != 0)    {
        c2 = contador;

        for(int i = 0; i < 26; i++)    {
        acertos[i] = 0;
        errados[i] = 0;
    }

        while(c2 > 0)   {
            cin >> questao >> tempo >> acerto;

            if(acerto == "correct") {
                if(acertos[questao - 65] == 0)  {
                    acertos[questao - 65] = 1;
                    p += tempo;
                    s++;
                }
            }

            if(acerto == "incorrect")   {
                errados[questao - 65]++;
            }

            c2--;
        }

        for(int i = 0; i < 26; i++) {
            if(acertos[i] == 1) {
                p += errados[i] * 20;
            }
        }

        cout << s << " " << p << endl;
        s = 0;
        p = 0;
        cin >> contador;
    }





    return 0;
}

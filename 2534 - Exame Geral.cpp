#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void bubbleSort(int vetor[], int tamanho) {
    int anda = 0;
    int guarda;

    while(anda < tamanho) {
        for(int i = 0; i < tamanho - 1; i++)
            if(vetor[i] < vetor[i + 1]) {
                guarda = vetor[i + 1];
                vetor[i + 1] = vetor[i];
                vetor[i] = guarda;
            }
        anda++;
    }
   return;
}


int main() {

    int habitantes, notas, nota;

    while(cin >> habitantes >> notas) {
        int guarda[habitantes];
        for(int i = 0; i < habitantes; i++) {
            cin >> nota;
            guarda[i] = nota;
        }
        bubbleSort(guarda, habitantes);

        for(int i = 0; i < notas; i++) {
            cin >> nota;
            cout << guarda[nota - 1] << endl;
        }
    }

    return 0;
}

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void shellSort(int *vet, int tamanho) {
    int i , j , value;
    int gap = 1;
    while(gap < tamanho) {
        gap = 3*gap+1;
    }
    while ( gap > 1) {
        gap /= 3;
        for(i = gap; i < tamanho; i++) {
            value = vet[i];
            j = i - gap;
            while (j >= 0 && value < vet[j]) {
                vet [j + gap] = vet[j];
                j -= gap;
            }
            vet [j + gap] = value;
        }
    }
}

int main() {
    int tam=200, vet[tam];
    srand(time(NULL));

    for(int i=0;i<tam;i++){
      vet[i]= rand() % 200;
    }
    cout << "Antes do Merge Sort :" <<endl;
    for(int i=0;i<tam;i++){
      cout<<"["<<vet[i]<<"], ";
    }
  shellSort(vet,tam);
     cout << "Depois do Merge Sort :" <<endl;
    for(int i=0;i<tam;i++){
      cout<<"["<<vet[i]<<"], ";
    }
    return (0);
  }

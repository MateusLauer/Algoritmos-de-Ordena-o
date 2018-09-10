#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void mergeSort(int *vetor, int posicaoInicio, int posicaoFim) {
    int i, j, k, metadeTamanho, *vetorTemp;
    if(posicaoInicio == posicaoFim) return;
    metadeTamanho = (posicaoInicio + posicaoFim ) / 2;

    mergeSort(vetor, posicaoInicio, metadeTamanho);
    mergeSort(vetor, metadeTamanho + 1, posicaoFim);

    i = posicaoInicio;
    j = metadeTamanho + 1;
    k = 0;
    vetorTemp = (int *) malloc(sizeof(int) * (posicaoFim - posicaoInicio + 1));

    while(i < metadeTamanho + 1 || j  < posicaoFim + 1) {
        if (i == metadeTamanho + 1 ) {
            vetorTemp[k] = vetor[j];
            j++;
            k++;
        }
        else {
            if (j == posicaoFim + 1) {
                vetorTemp[k] = vetor[i];
                i++;
                k++;
            }
            else {
                if (vetor[i] < vetor[j]) {
                    vetorTemp[k] = vetor[i];
                    i++;
                    k++;
                }
                else {
                    vetorTemp[k] = vetor[j];
                    j++;
                    k++;
                }
            }
        }

    }
    for(i = posicaoInicio; i <= posicaoFim; i++) {
        vetor[i] = vetorTemp[i - posicaoInicio];
    }
    free(vetorTemp);
}
int main() {
    int tam=500, vet[tam];
    srand(time(NULL));

    for(int i=0;i<tam;i++){
      vet[i]= rand() % 200;
    }
    cout << "Antes do Merge Sort :" <<endl;
    for(int i=0;i<tam;i++){
      cout<<"["<<vet[i]<<"], ";
    }
  mergeSort(vet,0,49999); //digitar o primeiro e ultimo indice do vetor com base no tamanho escolhido

     cout << "Depois do Merge Sort :" <<endl;
    for(int i=0;i<tam;i++){
      cout<<"["<<vet[i]<<"], ";
    }
    return (0);
  }

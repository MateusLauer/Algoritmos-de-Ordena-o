#include <iostream>
#include <stdlib.h>
#include <time.h>

  using namespace std;

  void SelectionSort(int vetor[], int tam) {
      for (int indice = 0; indice < tam; ++indice) {
          int indiceMenor = indice;
          for (int indiceSeguinte = indice+1; indiceSeguinte < tam; ++indiceSeguinte) {
              if (vetor[indiceSeguinte] < vetor[indiceMenor]) {
                  indiceMenor = indiceSeguinte;
              }
          }
          int aux = vetor[indice];
          vetor[indice] = vetor[indiceMenor];
          vetor[indiceMenor] = aux;
      }
  }

  int main() {
    int tam=100, vet[tam];
    srand(time(NULL));

    for(int i=0;i<tam;i++){
      vet[i]= rand() % 200;
    }
    cout << "Antes do Selection Sort :" <<endl;
    for(int i=0;i<tam;i++){
      cout<<"["<<vet[i]<<"], ";
    }
  SelectionSort(vet,tam);

   cout << "Depois do Selection Sort :" <<endl;
    for(int i=0;i<tam;i++){
      cout<<"["<<vet[i]<<"], ";
    }
    return (0);
  }

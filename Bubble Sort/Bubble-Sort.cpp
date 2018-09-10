#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


  void bubbleSort (int vet[], int tam) {
    int flag, i, aux;

    do {
      flag = 0;
      for (i = 0; i < (tam - 1); i++) {


   if (vet[i] > vet[i+1]) {

     aux = vet[i];
     vet[i] = vet[i+1];
     vet[i+1] = aux;
     flag =1;
   }
      }
    } while (flag == 1);
  }

int main() {
    int tam=500, vet[tam];
    srand(time(NULL));

    for(int i=0;i<tam;i++){
      vet[i]= rand() % 500;
    }
    cout<< "Antes do Bubble Sort :" <<endl;
    for(int i=0;i<tam;i++){
      cout<<"["<<vet[i]<<"], ";
    }
  bubbleSort (vet, tam);
     cout<< "Depois do Bubble Sort :" <<endl;
    for(int i=0;i<tam;i++){
      cout<<"["<<vet[i]<<"], ";
    }
    return (0);
  }





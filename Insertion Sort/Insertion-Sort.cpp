#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void insercao (int vet[], int tam){
  int i, j, x;

  for (i=2; i<=tam; i++){

x = vet[i];
j=i-1;
vet[0] = x;

while (x < vet[j]){

vet[j+1] = vet[j];
j--;

}

vet[j+1] = x;

  }
}
int main() {
    int tam=500, vet[tam];
    srand(time(NULL));

    for(int i=0;i<tam;i++){
      vet[i]= rand() % 200;
    }
     cout << "Antes do Insertion Sort :" <<endl;
    for(int i=0;i<tam;i++){
      cout<<"["<<vet[i]<<"], ";
    }
  insercao(vet,tam);
     cout << "Depois do Insertion Sort :" <<endl;
    for(int i=0;i<tam;i++){
      cout<<"["<<vet[i]<<"], ";
    }
    return (0);
  }

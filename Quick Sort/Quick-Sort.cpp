#include <iostream>
#include <stdlib.h>
#include <time.h>

  using namespace std;



void QuickSort(int *array, int menor, int maior)
{
    int i = menor;
    int j = maior;
    int pivot = array[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (j > menor)
        QuickSort(array, menor, j);
    if (i < maior)
        QuickSort(array, i, maior);
}

int main()
{
    int tam=100, array[tam];
     for(int i=0;i<tam;i++){
      array[i]= rand() % 200;
    }
    int n = sizeof(array)/sizeof(array[0]);


    cout << "Antes do Quick Sort :" <<endl;
    for(int i=0;i<tam;i++){
      cout<<"["<<array[i]<<"], ";
    }

    QuickSort(array, 0, n);

   cout << "Depois do Quick Sort :" <<endl;
    for(int i=0;i<tam;i++){
      cout<<"["<<array[i]<<"], ";
    }
    return (0);
}

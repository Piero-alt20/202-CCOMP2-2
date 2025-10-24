#include <iostream>

using namespace std;

int sumArray(int *ptr, int tam){
      int sum = 0;
      for(int i=0; i < tam; sum+=ptr[i++]);
      return sum;
}
int sumArrayRec(int *ptr, int tam){
    if(tam == 0){
        return 0;
    }
    return *ptr + sumArrayRec(++ptr, --tam);
}
/**
*Implementar un algoritmo de ordenamiento Burbujita
*/

void bubblesort(int *ptr, int tam){
    for (int i = 0; i < tam-1; i++){
        for(int j=0; j < tam-1; j++){
            if(ptr[j] < ptr[j+1]){
                swap(ptr[j],ptr[j+1]);
            }
        }
    }
}
/**
*tarea
* Insertionsort
*mergesort
*quicksort
*/
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int j = i;
        // Mientras no estemos al inicio y el elemento actual sea menor que el anterior:
        while (j > 0 && arr[j] < arr[j - 1]) {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}



int main()
{
    int tam=5;
    int *ptr = new int[tam];
    for(int i = 0; i < tam; i++)
        ptr[i] = tam-i;

    for(int i = 0; i < tam; i++)
        cout << ptr[i] <<" ";

        cout << "nLasuma It es:" sumArray(ptr, tam)
        cout << "nLasuma Rec es:" sumArrayRec(ptr, tam)
        delete[] ptr;
    return 0;
}

#include <iostream>

using namespace std;
/**
*implemente una funcion que invierta los elementos de un array
*/
void invertir(int arr[], int tam){
 for(int i=0, j=tam-1; i< j; i++, j--){
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
 }
}
void invertirR(int arr[], int tam, int i = 0){
if (i > tam){
    return;
    }else{
       int tmp = arr[i];
       arr[i] = arr[tam-1];
       arr[tam-1] =tmp;
       invertirR(arr, tam-1, i+1);
    }
}
void print (int arr[], int tam){
 cout << "[ ";
 for(int i=0; i < tam; i++)
    cout << arr [i] << " ";
 cout << "]";
}
int main()
{
    int arr[4];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;

    print (arr, 4);
    cout << endl;
    print(arr, 4);
    return 0;
}

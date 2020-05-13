#include <iostream>
#include <algorithm> 

using namespace std;



void InversRecur(int arr[],int tamaño,int i=0){
    
    if (i>=tamaño)
        return;
    
    int aux = arr[i];
    arr[i] = arr[tamaño - 1];
    arr[tamaño - 1] = aux;
    InversRecur(arr, tamaño - 1, i + 1);
}
int main(){


    int arr[5]={1,2,3,4,5};
    int tamaño = sizeof(arr) / sizeof(arr[0]);
    InversRecur(arr, tamaño);
    for (int i = 0; i < tamaño;i++){
        cout << arr[i];
    }
    cout << endl;
    return 0;
}

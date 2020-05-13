#include <iostream>
#include <algorithm> 

using namespace std;



void InversRecur(int arr[],int tama�o,int i=0){
    
    if (i>=tama�o)
        return;
    
    int aux = arr[i];
    arr[i] = arr[tama�o - 1];
    arr[tama�o - 1] = aux;
    InversRecur(arr, tama�o - 1, i + 1);
}
int main(){


    int arr[5]={1,2,3,4,5};
    int tama�o = sizeof(arr) / sizeof(arr[0]);
    InversRecur(arr, tama�o);
    for (int i = 0; i < tama�o;i++){
        cout << arr[i];
    }
    cout << endl;
    return 0;
}

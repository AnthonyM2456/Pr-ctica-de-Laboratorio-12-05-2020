#include <iostream>
#include <algorithm> 

using namespace std;

void InversIterat(int arr[],int tamaño){
	
    int aux[tamaño];
    
    for (int i = 0; i < tamaño; i++)
    {
    	
        aux[i] = arr[tamaño - (i + 1)];
        cout << aux[i];
        
    }
    
    cout << endl;
}


int main(){

    int arr[5]={1,2,3,4,6};
    
    int tamaño = sizeof(arr) / sizeof(arr[0]);
    InversIterat(arr, tamaño);
    
    return 0;
}

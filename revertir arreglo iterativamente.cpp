#include <iostream>
#include <algorithm> 

using namespace std;

void InversIterat(int arr[],int tama�o){
	
    int aux[tama�o];
    
    for (int i = 0; i < tama�o; i++)
    {
    	
        aux[i] = arr[tama�o - (i + 1)];
        cout << aux[i];
        
    }
    
    cout << endl;
}


int main(){

    int arr[5]={1,2,3,4,6};
    
    int tama�o = sizeof(arr) / sizeof(arr[0]);
    InversIterat(arr, tama�o);
    
    return 0;
}

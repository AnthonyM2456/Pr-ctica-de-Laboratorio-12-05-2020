#include <iostream>
#include <array>

using namespace std;

const size_t tama�o{10};

void printArray(array<int, tama�o>& elemen, int ini, int fin){
	
    cout << elemen[ini] << " ";
    
    if(ini==fin){
    	return; 
	}
        
		  
    printArray(elemen, ini + 1, fin);
}

int main(){
	
    array<int, tama�o> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    printArray(arr, 1,5);
    
    return 0;
}

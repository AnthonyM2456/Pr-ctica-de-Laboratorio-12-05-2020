#include <iostream>
#include <array>

using namespace std;


const size_t tamaño = 10;
int mayor;

int maxArray(array<int, tamaño>& elemen, int ini, int fin){

    if(elemen[ini] > mayor){
      mayor = elemen[ini];
    }
    else{
      mayor = mayor;
    }

    return ini == fin ? mayor: maxArray(elemen, ini + 1, fin);

}

int main(){

    array<int, tamaño> arr{14, 1, 21, 2, 15, 16, 46, 28, 95, 42};

    cout<<maxArray(arr, 0, 5);

    return 0;
}

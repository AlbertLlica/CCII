/*
Cada nuevo término de la secuencia de Fibonacci se genera 
sumando los dos términos anteriores. Al comenzar con 1 y 2, 
los primeros 10 términos serán:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

Al considerar los términos en la secuencia de Fibonacci cuyos
valores no exceden los cuatro millones, encuentre la suma de
los términos pares.
*/
#include <iostream>

using namespace std;

int main()
{
    int x=0, y=1, aux=0, suma=0;
    
    while (y<4000000){
        aux = x+y; //0+1
        x = y;  // x=1
        y = aux; //y = 1
        if(y%2 == 0){
            suma += aux; 
        }
    }
    cout<<"La suma es: "<<suma;
    return 0;
}
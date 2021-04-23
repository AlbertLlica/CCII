/*
La suma de los números primos por debajo de 10 es 2 + 3 + 5 + 7 = 17.

Encuentra la suma de todos los números primos por debajo de dos millones.
*/

#include <iostream>

using namespace std;

bool primo (int n){
    bool condicion;
    if(n!=1 && n!=0){
        for( int i=2; i<=n; i++ ){
            if(n%i == 0){
                if(n == i) {condicion = true;
                    return condicion;
                }
                else {
                    condicion = false;
                    return condicion;
                }
            }
        }
    }
    else condicion = false;
    return condicion;
}

int main()
{   
    int num =10;
    int resultado =0;
    
    for(int i=2; i<num; i++){
        if(primo(i)==true)
            resultado +=i;
    }
    cout<<resultado;
    return 0;	
}

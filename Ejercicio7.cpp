/*Al enumerar los primeros seis números primos: 
2, 3, 5, 7, 11 y 13, podemos ver que el sexto primo es 13.

¿Cuál es el número primo 1001er?*/

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
    int numero=0;
    
    for(int i=2; i<500000; i++){
        if(primo(i)==true){
            numero++;
            if(numero==10001) cout<<"El numero es: "<<i;
        }
    }
}
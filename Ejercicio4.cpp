/*Un número palindrómico se lee igual en ambos sentidos. El palíndromo más grande hecho del producto de dos números de 2 dígitos es 9009 = 91 × 99.

Encuentra el palíndromo más grande formado por el producto de dos números de 3 dígitos.*/
//Fuente: https://stackoverflow.com/questions/31146678/solving-project-euler-4-with-c
#include <iostream>
using namespace std;

int vuelta(int n){
    int numV=0;
    int x=0;
    do{
       x = n%10;
       numV = numV*10 + x; 
       n /= 10;  
    }
    while(n!=0);
    return numV;
}

bool palindromo(int m){
    bool rpta;
    if(vuelta(m) == m){
        rpta = true;
    }
    else{
        rpta = false;
    }
    return rpta;
}

int main()
{
    int producto = 0;
    int aux = 0;
    for(int i = 100; i < 1000; i++){
        for(int j = 100; j < 1000; j++){
            producto = i * j;
            if(palindromo(producto) && aux==0){
                    aux = producto;
                }
            else if(palindromo(producto) && aux!=0){
                if(producto > aux){
                    aux = producto;
                    }
                }
            }
        }
        cout <<"El palindormo mas grande es: "<<aux<<endl;
        return 0;
}
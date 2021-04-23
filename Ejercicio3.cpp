/*Los factores primos de 13195 son 5, 7, 13 y 29.
¿Cuál es el factor primo más grande del número 
600851475143?*/

#include <iostream>
using namespace std;

int main(){
    long long valor=600851475143 ,primo=1 ;
        for(int i=2;i<=valor;i++){
            if(valor%i==0){
                valor=valor/i;
                 if(i>primo){
                    primo=i;
                 }
            }
        }
    cout<<"El primo mas grande es:  "<<primo<<endl;
    return 0;
}
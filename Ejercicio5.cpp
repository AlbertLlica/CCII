/*2520 es el número más pequeño que se puede dividir por cada uno de los números del 1 al 10 sin ningún resto.

¿Cuál es el número positivo más pequeño que es divisible por todos los números del 1 al 20?*/

#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i!=0; i++){
        if (i%720==0 && i%19==0 && i%17==0 && i%13==0 && i%11==0 && i%7==0 ){
            cout <<"El numero mas pequeño es: "<< i << endl;
            return 0;
        }
    }
}
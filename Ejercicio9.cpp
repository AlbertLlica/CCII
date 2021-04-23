/*Un triplete pitagórico es un conjunto de tres números naturales, a <b <c, para los cuales,

a2 + b2 = c2
Por ejemplo, 32 + 42 = 9 + 16 = 25 = 52.

Existe exactamente un triplete pitagórico para el cual a + b + c = 1000.
Encuentre el producto abc.*/

#include <iostream>

using namespace std;

int main()
{   int valor =1000;
    
    for (int a=1; a<=valor; a++){
        for(int b=a+1; b<=valor; b++){
            int c=valor-a-b;
                if(a*a + b*b == c*c) cout<<"La respuesta es: "<<a*b*c;

        }
    }
   
    return 0;	
}
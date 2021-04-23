#include <iostream>

using namespace std;


int main()
{
    int resultado1=0, resultado2=0;
    
    for(int i=1;i<=100;i++){
        resultado1 += i*i;
        resultado2 += i;
    }
    cout<<"La diferencia es: "<<resultado2*resultado2 - resultado1;

    return 0;
}

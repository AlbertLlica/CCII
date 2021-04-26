#include <iostream>

using namespace std;

long double factorial(long double n){
    long double aux=1,fact=1;
	for(;aux<=n;aux++){
		fact=fact*aux;
	}
	return fact;
}

int main(){

	long long l=20, a=20, rpta;
    rpta=factorial(a+l)/(factorial(l)*factorial(a));
    cout<<"Numero de rutas: "<<rpta+1; 
    return 0;
}

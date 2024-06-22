#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int cat1,cat2,hipo;
	cout<<"Ingrese el primer cateto del triangulo: ";
	cin>>cat1;
	cout<<"Ingrese el segundo cateto del triangulo: ";
	cin>>cat2;
	hipo=sqrt(cat1*cat1+cat2*cat2);
	cout<<"La hipotenusa es: "<<hipo<<endl;
	return 0;	
}

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int r;
	double area;
	cout<<"Ingrese el radio del circulo: "<<endl;
	cin>>r;
	area=pow(r,2)*M_PI;
	cout<<"El area del circulo es: "<<area<<endl;
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,b,c;
	double x1,x2;
	cout<<"Introduce el primer coeficiente: ";
	cin>>a;
	cout<<"Introduce el segundo coeficiente: ";
	cin>>b;
	cout<<"Introduce el tercer coeficiente: ";
	cin>>c;
	x1=(b*-1+sqrt(pow(b,2)+a*c*-4))/(a*2);
	x2=(b*-1-sqrt(pow(b,2)+a*c*-4))/(a*2);
	cout<<"Primera raiz: "<<x1<<endl;
	cout<<"Segunda raiz: "<<x2<<endl;
	return 0;
}

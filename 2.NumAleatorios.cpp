#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	int n,max,num;
	cout<<"Ingrese la cantidad de numeros aleatorios a generar:"<<endl;
	cin>>n;
	cout<<"Ingrese el valor maximo permitido para los numeros aleatorios:"<<endl;
	cin>>max;
	cout<<"\nLos numeros generados son los siguientes:"<<endl;
	for(int i=1;i<=n;i++){
		num=rand()%max+1;
		cout<<num<<endl;
	}
	return 0;	
}

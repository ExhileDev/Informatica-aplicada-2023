#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
main(){
	int suma, elevacion,n;
	cout<<"Suma con elevacion \n";
	cout<<"Ingrese el numero que vamos a sumar:";cin>>n;
	for(int i=1;i<=n;i++){
		elevacion=pow(2,i);
		suma+=elevacion;
	}
	cout<<"\nEl total es: "<<suma;
	Sleep(3000);
	return 0;
}

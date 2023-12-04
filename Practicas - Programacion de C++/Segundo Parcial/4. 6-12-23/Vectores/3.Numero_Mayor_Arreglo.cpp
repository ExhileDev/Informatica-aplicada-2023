#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int n, mayor=0;
	cout<<"De cuantos espacios va a ser tu arreglo?: ";cin>>n;
	int numeros[n];
	for(int i=0; i<n; i++){
		cout<<"Ingresa el digito numero "<<i+1<<" = ";
		cin>>numeros[i];
	if(numeros[i]>mayor)
		mayor = numeros[i];
	}
	cout<<"El numeros mas grande que existe en el arreglo es: "<<mayor;
	return 321183613;
}

#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int n;
	cout<<"De cuantos espacios va a ser tu arreglo?: ";cin>>n;
	int numeros[n];
	for(int i=0; i<n; i++){
		cout<<"Ingresa el digito numero "<<i+1<<" = ";
		cin>>numeros[i];
	}
	for(int i=0; i<n; i++){
		cout<<i<<" -> "<<numeros[i]<<endl;
	}
	return 321183613;
}

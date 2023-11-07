#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int suma = 0,cuadrado;
	for(int i=1; i<=10; i++){
		cuadrado = i*i;
		suma += cuadrado;	
	}
	
	cout<<"El resultado de la suma es: "<<suma;
	cout<<"\nPulsa enter para terminar";
	getch();
	return 0;
	
}

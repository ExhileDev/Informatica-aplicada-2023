//Sumar n numeros
#include <iostream>
#include <windows.h>
using namespace std;
main(){
	cout<<"Suma de Elementos de un numero\n";
	cout<<"Ingresa un numero para sumar sus elementos: ";int e;cin>>e;//declara y pide al usuario un valor como limite
	int resultado;
	for(int i=0; i<=e; i++){resultado += i;}//Operación
	cout<<"\nEl resultado de la suma de tus elementos es: "<<resultado;//Imprime al usuario el resultado total de la operacion
	Sleep(3000);return 0;//El programa espera 3 segundos y se cierra 
}

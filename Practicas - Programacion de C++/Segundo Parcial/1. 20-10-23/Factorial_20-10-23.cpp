//Factorial
#include <iostream>
#include <windows.h>
using namespace std;
main(){
	cout<<"Factorial  de un numero\n";
	cout<<"Ingresa un numero para obtener su valor factorial: ";int e;cin>>e;//declara y pide al usuario un valor como limite
	int resultado=1;
	for(int i=1; i<=e; i++){resultado = resultado*i;}//Operación
	cout<<"\nEl resultado de la suma de tus elementos es: "<<resultado;//Imprime al usuario el resultado total de la operacion
	Sleep(3000);return 0;//El programa espera 3 segundos y se cierra
	return 0;
}

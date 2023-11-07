//Tablas de multiplicar
#include <iostream>
#include <windows.h>

using namespace std;

main(){
	float numero,limite,resultado;
	cout<<"\n\t\t\t\tGenerador de tablas de multiplicacion"<<endl<<endl;
	Sleep(2000);
	cout<<"Ingrese un numero para generar su tabla de multiplicar: ";cin>>numero;
	cout<<endl<<"Hasta que numero quieres generar: ";cin>>limite;
	system("cls");
	for(int i=0; i<=limite; i++){
		resultado = i*numero;
		if(i<limite){
			cout<<resultado<<",";
		}else{
			cout<<resultado;
		}
	}
	Sleep(3000);
	return 0;
}

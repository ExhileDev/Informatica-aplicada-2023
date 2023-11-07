#include <iostream>
#include <windows.h>
using namespace std;
main(){
	float a, limite, producto;
	cout<<"================================Generador de tablas de multiplicar======================================== \n";
	cout<<"Ingrese el numero que queremos multilplicar: ";cin>>a;
	cout<<"Ingrese hasta que numero quiere generar: ";cin>>limite;
	system("cls");
	cout<<"================================Generador de tablas de multiplicar======================================== \n";
	for(int i=0; i<=limite; i++){
		producto = i*a;
		cout<<a<<" X "<<i<<" = "<<producto<<endl;
		Sleep(500);
	}
	Sleep(2000);
	return 0;
}

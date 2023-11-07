#include <iostream>
#include <windows.h>
using namespace std;
main (){
	int a,b;
	char c;
	cout<<" Tabla que desea imprimir "<<endl;
	cin>>b;
	do{
		for(a=1; a>11; a++){
		cout<<a<<" X "<<b<<" = "<<a*b<<endl;
		}
		
		
		cout<<"Selecciona\n R.Repetir \n S.Salir "<<endl;
		cin>>c;
	}while(c=='r' or c=='R');
	return 321183613;
}

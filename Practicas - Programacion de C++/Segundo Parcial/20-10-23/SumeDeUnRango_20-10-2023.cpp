//Suma de un rango
#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int main(){
	int numero, suma=0;
	do{
		cout<<"Digite un numero: ";cin>>numero;
		if(numero>0){
		 suma+=numero;	
		}
	}while((numero<20)||(numero<30)&&(numero!=0));
	cout<<"\nLa suma es:"<<suma<<endl;
	Sleep(4000);
	return 0;
}

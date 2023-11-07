//Codigo Creado por ExhileDev;
#include <iostream>
#include <windows.h>
using namespace std;
main(){
	int limiteI,limiteE,animacion=1000;
	cout<<"====================Impresora de tablas de multiplicar=====================\n";
	cout<<"Hasta que tabla quieres imprimir: ";cin>>limiteI;
	cout<<"\nDale una valor al multiplicador: ";cin>>limiteE;
	cout<<"Cargando.";
	Sleep(animacion); system("cls");
	cout<<"====================Impresora de tablas de multiplicar=====================\n";
	cout<<"Hasta que tabla quieres imprimir: "<<limiteI;
	cout<<"\n\nDale una valor al multiplicador: "<<limiteE;
	cout<<"\nCargando..";
	Sleep(animacion); system("cls");
	cout<<"====================Impresora de tablas de multiplicar=====================\n";
	cout<<"Hasta que tabla quieres imprimir: "<<limiteI;
	cout<<"\n\nDale una valor al multiplicador: "<<limiteE;
	cout<<"\nCargando...\n";
	int segundos=3;
    for(int i=0; i<=100; i++){
        cout<<char(219);
        Sleep(segundos);
    }
	Sleep(animacion); system("cls");
	
	
	int animacionfor=5000/(limiteE*limiteI);
	for(int i=1; i<=limiteI; i++){
		cout<<"Tabla del "<<i<<endl;
		Sleep(animacionfor);
		for(int e=1; e<=limiteE; e++){
			cout<<i<<" x "<<e<<" = "<<i*e<<endl;
		}
	}
	return 321182613;
}

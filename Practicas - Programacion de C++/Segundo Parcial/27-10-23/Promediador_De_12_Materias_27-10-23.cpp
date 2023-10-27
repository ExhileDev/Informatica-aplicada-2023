#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
main(){
	string Materia[] = {"Matematicas: ","Fisica: ","Lengua Espanola: ","Geografia: ","Informatica: ","Historia: ","Educacion fisica: ","Lengua extranjera: ","Logica: ","Orientacion educactiva: ","Dibujo: ","Educacion Artistica: "};
	float Calificacion[12];float resultado = 0;
	for(int z=0; z<=11; z++){
	cout<<"=============================Promediador de 12 materias============================\n";
	cout<<"Dame la calificacion de "<<Materia[z];cin>>Calificacion[z];
	if(Calificacion[z]>11){
	cout<<"No puedes tener una calificacion mayor a 10, por defecto te pondremos 0";
	Calificacion[z] = 0;
	Sleep(1500);
	}
	resultado += Calificacion[z];	
	system("cls");
	}
	float promedio = resultado/12;
	cout<<"=============================Promediador de 12 materias============================\n";
	cout<<"El promediador calcula que tu promedio global es de "<<promedio;
	return 321183613;
}

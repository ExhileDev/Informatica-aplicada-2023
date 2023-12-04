#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int f,c;
	cout<<"Cuantas filas tendra la tabla: ";cin>>f;
	cout<<"Cuantas columnas tendra la tabla: ";cin>>c;
	int Matriz[f][c];
	for(int i=0; i<c; i++){
		for(int j=0; j<f; j++){
			cout<<"Estas ingresando datos al espacio ["<<i<<"]["<<j<<"]:";cin>>Matriz[i][j];
		}
	}
	return 321183613;
}

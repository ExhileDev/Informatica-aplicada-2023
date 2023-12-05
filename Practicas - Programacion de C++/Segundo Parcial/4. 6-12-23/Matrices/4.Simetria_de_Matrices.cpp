#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int f,c;
	char band='F';
	cout<<"Cuantas columnas tendra la matriz: ";cin>>c;
	cout<<"Cuantas filas tendra la matriz: ";cin>>f;
	int numeros[c][f];
	
	for(int i=0; i<c; i++){
		for(int j=0; j<f; j++){
			cout<<"Digite el numero que estara en el espacio ["<<i<<"]["<<j<<"]: ";cin>>numeros[i][j];
			
		}	
	}
	
	if(c==f){
		for(int i=0; i<c; i++){
			for(int j=0; j<f; j++){
				if(numeros[i][j]==numeros[j][i]){
					band='V';
				}
		}	
	}	
		
	}
	if(band=='V'){
		cout<<"La matriz es simetrica";
	}else{
		cout<<"La Matriz no es simetrica";
	}
		
	
	
	return 321183613;
}

#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int numeros[2][2]={{1,2},{3,4}}, numeros2[2][2];
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			numeros2[i][j]=numeros[i][j];
		}
	}
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<numeros2[i][j];
		}
	}
	return 321183613;
}

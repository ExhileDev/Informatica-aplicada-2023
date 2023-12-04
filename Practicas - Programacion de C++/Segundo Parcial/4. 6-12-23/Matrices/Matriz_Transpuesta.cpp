#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int numeros[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<numeros[i][j];
		}
		cout<<endl;
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<numeros[j][i];
		}
		cout<<endl;
	}
	
	return 321183613;
}

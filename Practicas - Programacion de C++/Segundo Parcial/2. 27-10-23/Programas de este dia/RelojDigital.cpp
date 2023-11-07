#include <iostream>
#include <windows.h>
using namespace std;
main(){
	int suma=0;
	for (int h=0; h<23; h++){
		for (int m=0; m<=60; m++){
			for(int s=0; s<60; s++){
			//system("cls");
			//cout<<h<<" : "<<m<<" : "<<s;
			//Sleep(1000);
			suma++;
			}
		}
	}
	cout<<"Total de segundos en un dia:"<<suma<<endl;
	return 0;
} 

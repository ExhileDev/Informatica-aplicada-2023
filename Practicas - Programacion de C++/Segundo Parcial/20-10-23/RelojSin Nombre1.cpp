//reloj
#include <iostream>
#include <windows.h>
using namespace std;
main(){
	int h,m,s;
	for(h=0; h<=23; h++){
		for(m=0; m<=59; m++){
			for(s=0; s<=59; s++){
				cout<<h;
				cout<<":";
				cout<<m;
				cout<<":";
				cout<<s;
				//Sleep(1000);
				//system("cls");
			}
		}
	}
}

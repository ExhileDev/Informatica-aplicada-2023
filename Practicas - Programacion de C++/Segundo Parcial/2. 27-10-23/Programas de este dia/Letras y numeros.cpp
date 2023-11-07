#include <iostream>
#include <windows.h>
using namespace std;
main (){
	char a;
	int b, suma=0;
	
	for (a='A'; a<='Z'; a++){
		for(b=0; b<10; b++)
			cout<<a<<" - "<<b<<endl;
			suma++;
	}
	cout<<"Total de combinaciones "<<suma<<endl;
	return 321183613;
}

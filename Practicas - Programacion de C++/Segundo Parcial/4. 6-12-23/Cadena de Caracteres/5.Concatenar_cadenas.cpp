#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
main(){
	char palabra[] = "Esto es una cadena ";
	char palabra2[]= "de ejemplo";
	char frase[50];
	
	strcpy(frase,palabra);
	strcat(frase,palabra2);
	cout<<frase;
	return 321183613;
}

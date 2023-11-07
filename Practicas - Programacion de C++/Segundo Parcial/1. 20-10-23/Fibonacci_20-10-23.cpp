#include <iostream>
#include <windows.h>
//#include <stdnio.h>
using namespace std;
main(){
        int e=0,d=0,c=1,i=0,numeros;
        cout<<"==============================Serie Fibonacci====================================\n";
        int t=0;cout<<"Ingrese el tiempo de la animacion en milisegundos: ";cin>>t;cout<<endl;cout<<"Cuantos numeros de la serie fibonacci quiere imprimir: ";cin>>numeros;
        do {
        	e=d+c;
            d=c;
            c=e;
            i++;
            if(i<numeros){
               	cout<<d<<",";
            }else{
               	cout<<d<<" Terminado :)";Sleep(t);cout<<".";Sleep(t);cout<<".";Sleep(t-200);cout<<".";
            }
            Sleep(t/2);
        } while (i<numeros);
       Sleep(3000);return 0;
}

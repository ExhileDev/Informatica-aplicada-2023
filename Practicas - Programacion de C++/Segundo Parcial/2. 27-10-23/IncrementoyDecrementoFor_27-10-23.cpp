#include <iostream> 
#include <windows.h>
using namespace std;
main(){
	cout<<"Impresion de numeros incremento y decremento hasta el 100\n";
	cout<<endl<<"Incremento"<<endl;
	for(int i=0; i<=100; i++){
		if(i<100){cout<<i<<",";}
		else{cout<<i;}
	}
	cout<<endl<<"Decremento"<<endl;
	for(int i=100; i>=0; i--){
		if(i>0){cout<<i<<",";
		}else{cout<<i;}
	}
	/*cout<<endl<<"Suma"<<endl;
	for(int i=1; i<=100; i++){
		int a=1, c=1;
		a = c + i;
		c = a;
		if(i<100){
			cout<<a<<",";
		}else{
			cout<<a;
		}
	}*/
	cout<<endl<<"\t\t3 en 3 hasta 300"<<endl;
	for(int e; e<=300; e=e+3){
		if(e<300){cout<<e<<",";}else{cout<<e;}
		}
	cout<<endl<<"\t\t3 en 3 hasta 0"<<endl;
	for(int e=300; e>=0; e=e-3){
		if(e>0){cout<<e<<",";}
		else{cout<<e;}
	}
	cout<<endl<<"letras"<<endl;
	char letras[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','w','x','y','z'};
	for(int i=0; i<=24; i++){
		if(i<24){cout<<letras[i]<<",";}
		else{cout<<letras[i];}
	}
	cout<<endl<<"letras decremento"<<endl;
	for(int i=24; i>=0; i--){
		if(i>0){cout<<letras[i]<<",";
		}else{cout<<letras[i];}
	}
	return 321183613;
}

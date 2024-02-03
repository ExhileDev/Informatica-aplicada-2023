#include <iostream>
using namespace std;
int main(){
	float Tasa_de_interes=0.10;
	int ingreso_anual=2000;
	float inversion_final;
	float inicio=53916;
	int Total=0;
	int a=36;
	
	for(int i=1; i<=a; i++){
		Total=inicio+inicio*Tasa_de_interes+ingreso_anual;
		cout<<"Año "<<i<<" de inversion, total: "<<Total<<endl;
		inicio=Total;
	}
	inversion_final=ingreso_anual*a;
	
	cout<<"Tu inversion final es: "<<inversion_final;
	return 321183613;
}

#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

main(){
	for(int i;i-1;i=0){
	int opcion; system("cls");
	//int h,m,s;for(h=0; h<=23; h++){for(m=0; m<=59; m++){for(s=0; s<=59; s++){cout<<"\t\t\t\t\t\t\t\t\t"<<h<<":"<<m<<":"<<s;Sleep(1000);system("cls");}}}
	cout<<"============================= Menu principal Segundo parcial ====================================\n\n";
	cout<<"=\t\t\t1.Tablas de multiplicar 20/Octubre/2023\t\t\t\t\t=\n";
	cout<<"=\t\t\t2.La suma de un Cuadrado 20/Octubre/2023\t\t\t\t=\n";
	cout<<"=\t\t\t3.Suma dentro de un rango 20/Octubre/2023\t\t\t\t=\n";
	cout<<"=\t\t\t4. Suma elemental 20/Octubre/2023\t\t\t\t\t=\n";
	cout<<"=\t\t\t5. Factorial 20/Octubre/2023     \t\t\t\t\t=\n";
	cout<<"=\t\t\t6. Suma con elevacion 20/Octubre/2023\t\t\t\t\t=\n";
	cout<<"=\t\t\t7. Serie fibonacci 20/Octubre/2023\t\t\t\t\t=\n";
	cout<<"=\t\t\t8. Numero Magico 20/Octubre/2023\t\t\t\t\t=\n";
	cout<<"=\t\t\t9. Cerrar menu\t\t\t\t\t\t\t\t=\n";
	cout<<"=\t\t\t Estas seleccionando la opcion: ";cin>>opcion;
	cout<<"\n=================================================================================================\n";
	cout<<"Gracias por usar nuestro menu, el equipo de ExhileDev te lo agradece :)\n";
	cout<<"pulse 2 veces enter para salir\n";
		
		switch(opcion){
		case 1: system("cls"); system("TablasDeMultiplicar_20-10-2023"); break;//Funciona
		case 2: system("cls"); system("SumaDeCuadrados_20-10-23.exe"); break;//Funciona
		case 3: system("cls"); system("SumeDeUnRango_20-10-2023"); break;//Funciona
		case 4: system("cls"); system("SumaDeElementos_20-10-23.exe"); break;//Funciona
		case 5: system("cls"); system("Factorial_20-10-23.exe"); break;//Funciona
		case 6: system("cls"); system("SumaConElevacion_20-10-23.exe");break;//Funciona
		case 7: system("cls"); system("Fibonacci_20-10-23.exe");break;
		case 8: system("cls"); system("NumeroMagico_20-10-23.exe");break;//Funciona
		case 9: getch();return 0; break;
		default: cout<<"Elija una opcion valida\n";
		break;
	}
	}
	
}

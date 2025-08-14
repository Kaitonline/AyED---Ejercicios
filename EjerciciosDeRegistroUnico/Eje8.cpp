//Ejercicio 8

#include <iostream>
using namespace std;

int main() {
int fecha, anio, mes, dia;

cout<<"Ingrese una fecha en formato AAAAMMDD: "<<endl;
cin>>fecha;

anio = fecha/10000;
mes = (fecha%10000)/100;
dia = fecha%100;


cout<<"El dia es: "<<dia<<endl;
cout<<"El mes es: "<<mes<<endl;
cout<<"El anio es: "<<anio<<endl;
	return 0;
}

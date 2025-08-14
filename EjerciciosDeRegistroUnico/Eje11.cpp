//Ejercicio 11

#include <iostream>
using namespace std;
//Definimos la funcion
bool esBisiesto(int anio);

int main() {
	int mes, anio;

	cout<<"Ingrese un anio y un mes(1-12): "<<endl;
	cin>>anio>>mes;

	int dias;

	switch(mes){
	case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12:
	   dias = 31;
	   break;
	case 4 : case 6 : case 9 : case 11 :
	   dias = 30;
	   break;
	case 2:
	   dias = esBisiesto(anio) ? 29 : 28;
	   break;

	default:
	   cout<<"No esta en el rango pedido."<<endl; //en caso de que el usuario haya ingresado un mes invalido
	   break;
	}

	cout<<"Los dias de la fecha ingresada son: "<<dias<<endl;

	return 0;
}

//Describimos la funcion
bool esBisiesto(int anio){
return (anio%4 == 0) || (anio%400 && anio % 100 != 0);
}

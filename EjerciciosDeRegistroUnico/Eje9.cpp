//Ejercicio 9

#include <iostream>
using namespace std;

int main() {
	int dia, mes, anio, fecha;

	//Pidale al usuario que ingrese cada item por separado
	cout<<"Ingrese un dia(dd): "<<endl;
	cin>>dia;

   cout<<"Ingrese un mes(mm): "<<endl;
   cin>>mes;

   cout<<"Ingrese un anio(aaaa): "<<endl;
   cin>>anio;

   //Convertimos al formato pedido
   fecha = (anio * 10000) + (mes * 100) + dia;

   cout<<"La fecha en formato AAAAMMDD: "<<fecha<<endl;
	return 0;
}

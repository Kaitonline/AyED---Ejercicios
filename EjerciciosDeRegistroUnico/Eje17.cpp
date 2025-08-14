//Ejercicio 17

#include <iostream>
using namespace std;

void mostrarMultiplo(int n);

int main() {
	int cantidad;
	cout<<"Ingrese la cantidad a mostrar de multiplos (no divisibles por 3) de 5: "<<endl;
	cin>>cantidad;

	mostrarMultiplo(cantidad);


	return 0;
}

void mostrarMultiplo(int n){
   int cont = 0;
   int numero = 5;

   while(cont<n){
   if(numero%3 != 0){
      cout<<numero;
      cont++; //usamos un contador para que vaya aumentando el valor en cada vuelta
   }
   numero += 5; //saltamos al siguiente multiplo de 5
   }

}

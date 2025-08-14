//Ejercicio 18

#include <iostream>
using namespace std;

void mostrarFactorial(int n);

int main() {
	int cantidad;

	cout<<"Ingrese hasta que numero quiere calcular el factorial: "<<endl;
	cin>>cantidad;

   mostrarFactorial(cantidad);

	return 0;
}

void mostrarFactorial(int n){

   int resultado = 1;

   for(int i = 1; i <= n ; i++){
      resultado *= i;
      cout<<"  "<<resultado;
   }

}

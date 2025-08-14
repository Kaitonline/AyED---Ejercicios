//Ejercicio 3

#include <iostream>
using namespace std;

int main() {
   double quinta,septima,nro;
   int resto;

   cout<<"Ingrese un numero: "<<endl;
   cin>>nro;

   quinta = nro/5;

   cout<<"La quinta parte del numero es: "<<quinta<<endl;

   resto =(int)nro%5;

   cout<<"El resto del numero dividido por 5 es: "<<resto<<endl;

   septima = (quinta)/7;

   cout<<"La septima parte de la quinta parte del valor ingresado: "<<septima<<endl;

	return 0;
}

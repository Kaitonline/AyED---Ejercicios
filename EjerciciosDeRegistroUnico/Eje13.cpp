//Ejercicio 13
#include <iostream>
using namespace std;
/* Factorial de un nro=
 * Ejemplo= 5!
 * 5! = 5 * 4!  ||   n! = n * (n-1)!
 * 4! = 4 * 3!  ||  (n-1)! = (n-1) * (n-2)!
 * 3! = 3 * 2!
 * 2! = 2 * 1!
 * 1! = 1 * 0!
 * 0! = 1
 */

//Aplicamos una funcion iterativa para hacer el factorial

int calcularFactorial(int n);

int main() {
	int n;

	cout<<"Ingrese un numero para calcular el factorial: "<<endl;
	cin>>n;

	int factorial = calcularFactorial(n);

	cout<<"El factorial de "<<n<<" es: "<<factorial<<endl;

	return 0;
}

int calcularFactorial(int n){
   if( n == 0 || n == 1){
      return 1;
   }
   int resultado = 1;

for(int i = 1; i <= n; ++i){
  resultado *= i;
}
return resultado;
}

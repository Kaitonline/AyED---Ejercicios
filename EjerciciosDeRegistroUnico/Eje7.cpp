//Ejercicio 7

#include <iostream>
using namespace std;

int main() {
	int lado1, lado2, lado3;

	cout<<"Ingrese los valores de los lados de un triangulo: "<<endl;
	cin>>lado1>>lado2>>lado3;

	if((lado1 == lado2) && (lado2 == lado3)){
	   cout<<"Es un triangulo equilatero."<<endl;
	}
	else if((lado1 != lado2) && (lado1 != lado3) && (lado2 != lado3) ){
	   cout<<"Es un triangulo escaleno."<<endl;
	}
	else{
	   cout<<"Es un triangulo isoceles."<<endl;
	}
	return 0;
}

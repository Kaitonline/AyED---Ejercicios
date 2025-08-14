#include <iostream>
using namespace std;

double calcularCociente(double divisor, double dividendo);

int main() {
	double divisor, dividendo;


	cout<<"Ingrese un divisor: "<<endl;
	cin>>divisor;

   cout<<"Ingrese un dividendo: "<<endl;
   cin>>dividendo;

	if(divisor == 0){
	   cout<<"No se puede hacer la division."<<endl;
	}
	else{
	   cout<<"El cociente de la division es: "<<calcularCociente(divisor, dividendo)<<endl;
	}


	return 0;
}
double calcularCociente(double divisor, double dividendo){
  return dividendo / divisor;
}

//Ejercicio 2

#include <iostream>
using namespace std;

int main() {
	double divisor, dividendo;
	

	cout<<"Ingrese un divisor= "<<endl;
	cin>>divisor;

   cout<<"Ingrese un dividendo= "<<endl;
   cin>>dividendo;

	if(divisor == 0){
	   cout<<"No se puede hacer la division."<<endl;
	}
	else{
	   double cociente = dividendo / divisor;
	   cout<<"El cociente de la division es: "<<cociente<<endl;
	}


	return 0;
}

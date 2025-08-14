//Ejercicio 12
#include <iostream>
#include<math.h>
using namespace std;

//Definimos la funcion sumasSucesivas para calcular la multiplicacion mediante sumas sucesivas
int sumasSucesivas(int a, int b);

int main() {
   int a, b;
   cout<<"Ingrese dos numeros: "<<endl;
   cin>>a>>b;

   int producto = sumasSucesivas(a, b);

   cout<<"El resultado de "<<a<<"*"<<b<<" es igual a: "<<producto<<endl;
	return 0;
}

//Describimos la funcion
int sumasSucesivas(int a, int b){
  if((a==0) || (b==0) ){ //consideramos el caso en el que a o b sean iguales a 0
     return 0;
  }

 int resultado = 0; //resultado de la suma
 int contador = 0; //valor que vamos a usar como contador

while(contador<abs(b)){ //b es el valor que vamos a sumar
   resultado += a;
   contador++;
   cout<<"Paso "<<contador<<":"<<"acumulado -> "<<resultado<<endl;
}


 if((a<0 && b>0)|| (b<0 && a>0)){ //consideramos el caso en el que a o b sean menores a 0
     resultado = -resultado;
  }

   return resultado;
}

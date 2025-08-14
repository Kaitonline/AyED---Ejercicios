//Ejercicio 16

#include <iostream>
using namespace std;

void mostrarFibonacci(int n); //funcion que realiza la sucesion de fibonacci

int main(){

   int terminos;

   cout<<"Ingrese una cantidad de terminos para mostrar de la serie Fibonacci: "<<endl;
   cin>>terminos;

   mostrarFibonacci(terminos);

	return 0;
}

//descripcion de la funcion
void mostrarFibonacci(int n){
   int sum = 0; //representa la suma de los terminos a y b
   int b=1; //empieza en uno ya que es el segundo termino de la sucesion
   int a=0; //es el primero termino de la sucesion
   cout<<"Sucesion de Fibonacci de "<<n<<" terminos: "<<endl;
   for(int i = 0; i<n ; i++ ){
      if(i<=1){
         sum = i; //en el caso en el que se ingrese un numero negativo, este inicializa en i
      }
      else{
         sum = a + b;
         a = b;
         b = sum;
      }
      cout<<sum<<" ";
      }

}

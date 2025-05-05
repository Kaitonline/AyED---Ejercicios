//Ejercicio 1
/*#include<iostream>
using namespace std;

int main(){
    int a, b, suma, div, mult,resta;
    a = b = suma = div = mult = resta = 0;

    cout<<"Ingrese un numero: "<<endl;
    cin>>a;

    cout<<"Ingrese otro numero: "<<endl;
    cin>>b;

    suma = a + b;
    cout<<"La suma de los numeros es: "<<suma<<endl;

    resta = a - b;
    cout<<"La resta de los numeros es: "<<resta<<endl;

    mult = a * b;
    cout<<"La multiplicacion de los numeros es: "<<mult<<endl;
    if(b == 0){
    cout<<"No se puede hacer la division."<<endl;
    }
    else{
    div = a/b;
    cout<<"La division de los numeros es: "<<div<<endl;
    }

    return 0;
    }
    */
#include <iostream>
using namespace std;

//Definimos funciones para hacer operaciones aritmeticas entre dos nros
int sumar(int a, int b);
int restar(int a, int b);
int dividir(int a, int b);
int multiplicar(int a, int b);

int main(){
   int a,b;

   cout<<"Ingrese un numero: "<<endl;
   cin>>a;

   cout<<"Ingrese otro numero: "<<endl;
   cin>>b;

   cout<<"La suma de los numeros es: "<<sumar(a,b)<<endl;

   cout<<"La resta de los numeros es: "<<restar(a,b)<<endl;

   cout<<"La multiplicacion de los numeros es: "<<multiplicar(a,b)<<endl;
   if(b == 0){
   cout<<"No se puede hacer la division."<<endl;
   }
   else{
   cout<<"La division de los numeros es: "<<dividir(a,b)<<endl;
   }


   return 0;
}

//Describir las funciones
int sumar(int a, int b){
   return a + b; //retorna la suma de los dos nros
}
int restar(int a, int b){
   return a - b;
}
int multiplicar(int a, int b){
   return a * b;
}
int dividir(int a, int b){
   return a / b;
}




















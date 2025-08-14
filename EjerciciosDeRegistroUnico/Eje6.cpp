//Ejercicio 6

#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int mayor, medio, menor;

	cout<<"Ingrese tres valores enteros diferentes entre si: "<<endl;
	cin>>a>>b>>c;

	//Determinar el mayor
	if(a>b && a>c){
	   mayor = a;
	}
	else if(b>a && b>c){
	   mayor = b;
	}
	else{
	   mayor = c;
	}

	//Determinamos el del medio

   if((b>a && a>c) || (c>a && a>b)){
      medio = a;
   }
   else if((a>b && b>c) || (c>b && b>a)){
      medio = b;
   }
   else{
      medio = c;
   }
  
   //Determinamos el menor
  
      if(b>a && c>a){
         menor = a;
      }
      else if(a>b && c>b){
         menor = b;
      }
      else{
         menor = c;
      }
      cout<<"El mayor es: "<<mayor<<endl;
      cout<<"El del medio es: "<<medio<<endl;
      cout<<"El menor es: "<<menor<<endl;
	return 0;
}

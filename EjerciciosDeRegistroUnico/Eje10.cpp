//Ejercicio 10
#include <iostream>
#include <math.h>
using namespace std;

//Definimos las funciones
bool esDivisiblePor(int a, int b); //funcion que hace la division entre dos numeros y muestra si a es divisible por b
bool esBisiesto(int anio); //funcion que muestra si un anio es o no bisiesto
bool formato(int fecha); //funcion que muestra si esta en el formato pedido
int comparar(int fechaActual, int fecha1, int fecha2); //funcion que compara las fechas
int fechaADias(int fecha);
int mesADias(int anio, int mes);

int main() {
	int fecha1, fecha2, fechaActual;
	cout<<"Ingrese la fecha actual(formato AAAAMMDD): "<<endl;
	cin>>fechaActual;

	if(!formato(fechaActual)){
	   cout<<"El formato de la fecha no es valido."<<endl;
	}

   cout<<"Ingrese una fecha cualquiera(formato AAAAMMDD): "<<endl;
   cin>>fecha1;

   if(!formato(fecha1)){
      cout<<"El formato de la fecha no es valido."<<endl;
   }

   cout<<"Ingrese otra fecha(formato AAAAMMDD): "<<endl;
   cin>>fecha2;

   if(!formato(fecha2)){
      cout<<"El formato de la fecha no es valido."<<endl;
   }

   int resultado = comparar(fechaActual,fecha1, fecha2);

   if(resultado == 0){
      cout<<"Las fechas ingresadas son iguales."<<endl;
   }
   else if(resultado == 1){
      cout<<"La fecha "<<fecha1<<" es la mas cercana a la actual."<<endl;
   }
   else{
         cout<<"La fecha "<<fecha2<<" es la mas cercana a la actual."<<endl;
      }

	return 0;
}
//Describimos las funciones
bool esDivisiblePor(int a, int b){
   return a % b == 0;
}

//Usamos la funcion esDivisiblePor ya que llamando a esta podemos hacer que la funcion esBisiesto se simplifique
bool esBisiesto(int anio){
   return(esDivisiblePor(anio,4) && !esDivisiblePor(anio,100)) || esDivisiblePor(anio,400);
}

bool formato(int fecha){
   int anio = fecha/10000;
   int mes = (fecha/100)%100;
   int dia = fecha%100;
   if(anio<1 || mes>12 || dia<1 || mes<1){
      return false;
   }

   int diasMes = mesADias(anio, mes);
      if(dia > diasMes){
         return false;
      }
   return true;
}

int mesADias(int anio, int mes){
   if(mes == 2){
      return esBisiesto(anio) ? 29 : 28; //? como operador ternario, llamamos a la funcion esBisiesto para comprobar si el anio es o no bisiesto
      //29 si se cumple que sea bisiesto y 28 si no se cumple
   }
   else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
      return 30;
   }
   else{
      return 31;
   }
}

int fechaADias(int fecha){
   int anio = fecha/10000;
   int mes = (fecha%1000)/100;
   int dia = fecha/100;

   int totalDias = dia; //inicializamos al valor totalDias en lo que esta en dias para empezar a sumar

   for(int m = 1; m<mes ;m++){
      totalDias += mesADias(m, anio); //bucle que sirve para sumarle a totalDias la cantidad de dias que tiene cada mes
      //ej= mes 3 -> mes1 = 31 dias mes2 = 28 o 29 dias(depende de la funcion esBisiesto) mes3 = 31 dias
      //totalDias = dia + mes1 + mes2 + mes3
   }

   for(int a = 1; a<anio ; a++){
      totalDias += esBisiesto(a) ? 366 : 365; //llamamos a la funcion es bisiesto para comprobar el anio ingresado
      //en caso de serlo va a tener 366 dias (el primer caso/devuelve true), caso contrario devuelve 365
   }

   return totalDias; //ahora totalDias tiene la suma de la cantidad de dias que tiene el anio introducido, los dias de los meses
   //y de los dias
}
int comparar(int fechaActual, int fecha1, int fecha2){

   int diasActual = fechaADias(fechaActual);
   int dias1 = fechaADias(fecha1);
   int dias2 = fechaADias(fecha2);

   //restamos el valor de ambas fechas introducidas y las comparamos, la que tenga menor resultado es la que estara mas cerca de la actual

   int dif1 = abs(dias1 - diasActual);
   int dif2 = abs(dias2 - diasActual);

   if(dif1 == dif2){
      return 0;
   }
   else if(dif1 < dif2){
      return 1;
   }
   else{
      return 2;
   }
}

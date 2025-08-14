//Ejercicio 15

#include<iostream>
using namespace std;
bool esPrimo(int n);//defino una funcion que devuelva verdadero en caso de ser primo y falso si no
void mostrarPrimerosPrimos(int cantidad); //funcion que sirve para imprimir la cantidad de numeros primos que se ingresen

int main(){
int cantidad;
cout<<"Ingrese un numero para imprimir la cantidad de numeros primos: "<<endl;
cin>>cantidad;

cout<<"Los primeros "<<cantidad<<" numeros primos son: "<<endl;

mostrarPrimerosPrimos(cantidad);

return 0;
}

//describo la función
bool esPrimo(int n){
for(int i = 2; i <= (n-1); i++){ //inicializo desde 2 ya que si es divisible por 1 es condicion para que sea primo
//me ahorro una iteracion
if(n%i == 0){
return false; //si encontró un divisor, no es primo
}
}
if(n<=1){
return false;
}
return true;
}

void mostrarPrimerosPrimos(int cantidad){
int cont=0;
int n = 2;
while(cont<cantidad){
if(esPrimo(n)){
cout<<n<<" ";
cont++;
}
n++; //incrementamos para que pase al siguiente numero a comprobar si es primo
}
}

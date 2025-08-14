//Ejercicio 14

#include<iostream>
using namespace std;
//defino una funcion que devuelva verdadero en caso de ser primo y falso si no
bool esPrimo(int n);

int main(){
int n;
cout<<"Ingrese un numero para saber si es primo: "<<endl;
cin>>n;

if(esPrimo(n)){
cout<<n<<" es un numero primo"<<endl;
}
else{
cout<<n<<" no es un numero primo"<<endl;
}

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

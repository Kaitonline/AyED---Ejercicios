//Ejercicio 1
#include<iostream>
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

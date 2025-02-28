#include "iostream"
#include <stdio.h>
using namespace std;

int main ()
{
	int A,B;
	float RES;
	//Mensaje de bienvenida
	cout<<"Hola este programa 1.7 Escribir el resultado de la expresion"<< "\n";
	
//Se declaran los numeros que se sumaran (pueden ser decimales)

//Se pide el primer numero
cout << "Porfavor ingresa el valor de A; "<<"\n";
//se asigna el primer valor a A
cin >> A;
//se pide el segundo numero
cout << "por favor dame el valor de B; "<<"\n";
// se asigna elvalor de B
cin >> B;

RES=((A+B)*(A+B))/3.0;

//Se muestra el resultado
printf ("\n El resultado de la expresion es %5.4f \n", RES);
cout << "El resultado de la expresion es"<<RES<<"\n";

return 0;
}

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int NUM;
	float CUADRADO, CUBO;
	cout<<"este programa te ayudara a calcular el cuadrado y el cubo de un numero positivo"<<"\n";
	
	cout<<"dame el valor del numero"<< "\n";
	cin>> NUM;
	
	CUADRADO= NUM*NUM;
	CUBO= NUM*NUM*NUM;
	
	cout<<"el cuadrado de tu numero es"<<CUADRADO<<"\n";
	cout<<"el cubo de tu numero es"<<CUBO<<"\n"; 
	return 0;
	
}

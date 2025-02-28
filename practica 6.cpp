#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int PRECIO, PAGO;
	float CAMBIO;
	
	cout<<"buenas tardes, dime cuanto costo tu articulo"<<"\n";
	cin>> PRECIO;
	
	cout<<"por favor dime cuanto pagaste"<<"\n";
	cin>> PAGO;
	
	CAMBIO= PRECIO-PAGO;
	
	cout<<"tu cambio es de "<<CAMBIO<<"\n";
	
	return 0;
}

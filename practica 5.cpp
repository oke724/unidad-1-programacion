#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int BASE,ALTURA;
	float PER,SUPE;
	
	cout<<"dame el valor de tu BASE"<<"\n";
	cin>> BASE;
	
	cout<<"dame el valor de tu altura"<<"\n";
	cin>> ALTURA;
	
	SUPE= BASE*ALTURA;
	PER=2*(BASE+ALTURA);
	
	cout<<"el valor de tu superficie es"<<SUPE<<"\n";
	cout<<"el valor de tu perimetro es"<<PER<<"\n";
	
	return 0;
	
		}

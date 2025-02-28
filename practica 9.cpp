#include <iostream>
using namespace std;

int main()
{
	float RADIO,ALTURA,VOLUMEN,AREA;
	const float PI=3.141592;
	
	cout<<"dame el valor de tu radio"<<"\n";
	cin>> RADIO;
	
	cout<<"dame el valor de tu altura"<<"\n";
	cin>>ALTURA;
	
	VOLUMEN=PI*(RADIO*RADIO)*ALTURA;
	AREA= 2*PI*RADIO*ALTURA;
	
	cout<<"el volumen de tu figura es:"<<VOLUMEN<<"\n";
	cout<<"el area de tu figura es:"<<AREA<<"\n";
	return 0;
	
}

#include <iostream>
#include <iostream>

using namespace std;

int main()
{
	string NOMBRE;
	float PESO,LONGITUD;
	float PESOK,LONGITUDM;
	
	cout<<"dame el nombre de tu dinosaurio"<<"\n";
	cin>> NOMBRE;
	
	cout<<"dame el peso de tu dinosaurio en toneladas"<<"\n";
	cin>> PESO;
	
	cout<<"dame la longitud de tu dinosaurio en pies"<<"\n";
	cin>> LONGITUD;
	
	PESOK= PESO*1000;
	LONGITUDM= LONGITUD* 0.3047;	
	
	cout<<"el peso de tu dinosaurio en kilos es:"<<PESOK<<"\n";
	cout<<"la longitud de tu dinosaurio en metros es:"<<LONGITUDM<<"\n";
	
	return 0;
}

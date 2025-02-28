#include "iostream"
#include <stdio.h>
using namespace std;

int main ()
{
	int MAT,CAL1,CAL2,CAL3,CAL4,CAL5;
	float PRO; 
	
	cout<<"hola, te ayudare a sacar tu promedio"<<"\n";
	
	cout<<"dame tu numero de matricula"<< "\n";
	
	cin>> MAT;
	
	cout <<"dame tu primer calificacion"<< "\n";
	
	cin>> CAL1;
	
	cout<< "dame tu segunda calificacion"<< "\n";
	
	cin>> CAL2;
	
	cout<<"dame tu tercera calificacion"<< "\n";
	
	cin>> CAL3;
	
	cout<<"dame tu cuarta calificacion"<< "\n";
	
	cin>> CAL4;
	
	
	cout<<"dame tu quinta calificacion"<< "\n";
	
	cin>> CAL5;
	
	PRO= (CAL1+CAL2+CAL3+CAL4+CAL5)/5;
	
	cout<<"el alumno con matricula" <<MAT<<"tiene un promedio de"<<PRO<<"\n";
	
}

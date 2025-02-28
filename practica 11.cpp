#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int LAD1,LAD2,LAD3,AREA;
	float S;

	cout<<"dame el valor del primer lado"<<"\n";
	
	cin>> LAD1;

	cout<<"dame el valor del segundo lado"<<"\n";
	
	cin>> LAD2;

	cout<<"dame el valor del tercer lado"<<"\n";
	
	cin>> LAD3;
	
	S= (LAD1+LAD2+LAD3)/2;
	AREA= (S*(S-LAD1)*(S-LAD2)*(S-LAD3))*0.5;
	
cout<<"el valor de S es:"<<S<<"\n";
cout<<"el valor de tu area es:"<<AREA<<"\n";
	
	return 0;
}

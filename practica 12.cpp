#include <iostream>
#include "math.h"
using namespace std;
int main()
{
	float X1,Y1,X2,Y2,DIS;
	
	cout<<"escribe la cordenada x del primer punto"<<"\n";
	cin>>X1;
	
	cout<<"escribe la cordenada de y del primer punto"<<"\n";
	cin>>Y1;
	
	cout<<"escribe la cordenada de x del segundo punto"<<"\n";
	cin>> X2;
	
	cout<<"escribe la cordenada de y del segundo punto"<<"\n";
	cin>>Y2;
	
	DIS=((X1-X2)*2+(Y1-Y2)*2)*.5;
	
	cout<<"la distancia entre el primer y segundo punto es:"<<DIS<<"\n";
}

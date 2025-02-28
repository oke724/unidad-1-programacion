#include <iostream>
using namespace std;

int main()
{
	float GALONES,TOTAL;
	const float GALON=3.785,PRECIOLITRO=8.20;
	
	cout<<"cuantos galones compraste"<<"\n";
	cin>> GALONES;
	
	TOTAL=GALONES*GALON*PRECIOLITRO;
	
	cout<<"el precio de tu compra es"<<TOTAL<<"\n";
	return 0;
	
}

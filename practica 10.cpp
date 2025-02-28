#include <iostream>
using namespace std;

int main()
{
	int DIAS;
	float SEGUNDOS;
	
	cout<<"escribe el numero de dias "<<"\n";
	cin>> DIAS;
	
	SEGUNDOS=DIAS*24*60*60;
	
	cout<<"en"<<DIAS<<" dias, hay"<<SEGUNDOS<<"segundos"<<"\n";
	cin>>DIAS;
	return 0;
}

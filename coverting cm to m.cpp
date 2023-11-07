// program for converting centimeters to meters and kilometers
#include <iostream>

using namespace std;
int main (){
	//1 meter = 100 cm
	// 1 km = 100,000cm
	// variables
	float cm;
	int m;
	float km;
	cm= 10300;
	
	
	//coverting to meters
	m = cm/100;
	//coverting to km
	km = cm/100000;
	cout <<"10300 centimeters are equivalent to "<<m<< " Meters""\n10300 centimeters are equivalent to "<<km<< " Kilometers";
	return 0;
}
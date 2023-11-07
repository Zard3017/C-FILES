//number of hectares every son gets
#include <iostream>

using namespace std;
int main(){
	//var for land
	float land;
	//var for no. of sons
	int sons;
	//no.of hectares
	float y;
	//values
	land=20;
	sons=6;
	
	
	//getting size of land for each son
	y = land / sons;
	cout<< "Each son will get "<<y<<" hectares of land";
	return 0;
	
}
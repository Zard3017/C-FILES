// program for getting volume

#include <iostream>

using namespace std;
int main(){
	float r,height, area, volume;
	cout<<"Input the radius ";
	cin>>r;
	cout<<"Input the height ";
	cin>>height;
	
	volume=3.142*r*r*height;
	cout<<"The volume is "<<volume;
	return 0;
}
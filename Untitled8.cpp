//interactive program for getting area of a triangle

#include <iostream>

using namespace std;
int main(){
	float height,base, hypotenuse,area,perimeter;
	cout<<"	Input the height ";
	cin>>height;
	cout<<"Input the base";
	cin>>base;
	cout<<"Input the hypotenuse";
	cin>>hypotenuse;
	
	area=0.5*base*height;
    perimeter= base+height+hypotenuse;
	
	cout<<"The area is "<<area<< "\n";
	cout<<"The perimeter is"<<perimeter;
	return 0;

}
//interactive program for getting area of a triangle

//program for getting division of numbers
#include <iostream>

using namespace std;
int main(){
	float height,base, hypotenuse,area,perimeter;
	cout<<"Input the height ";
	cin>>height;
	cout<<"Input the base ";
	cin>>base;
	cout<<"Input the hypotenuse ";
	cin>>hypotenuse;
	
	area=1/2*base*height;
    perimeter= base+height+hypotenuse;
	
	cout<<"The area is "<<area<< "\n";
	cout<<"The perimeter is"<<perimeter;
	return 0;

}
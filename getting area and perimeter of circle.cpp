//program for getting the area and perimeter of a circle
#include <iostream>

using namespace std;
int main(){
	// perimeter of circle = circumference
	//area= p*r*r
	//perimeter=pD
	int radius;
	int diameter;
	float area;
	float perimeter;
	float p;
	
	//values
	radius= 6;
	diameter=12;
	p=3.142;
	
	//getting the area
	area = p *radius*radius;
	//getting the perimeter
	perimeter = p * diameter;
	cout<<"The area of the circle is "<<area<< "\nThe perimeter of the circle is "<<perimeter;
	
	
	
	
}

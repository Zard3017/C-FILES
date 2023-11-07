// program for getting the area and perimeter of right angled triangle
#include <iostream>

using namespace std;
int main(){
	// variables of triangle
	int height;
	int base;
	int hypotenuse;
	int area;
	int perimeter;
	//values
	height = 7;
	base= 10;
	hypotenuse = 12;
	
	//getting the area of triangle
	area = 0.5 * base * height;
	perimeter = base + height + hypotenuse;
	
	cout<<"The area of the Triangle is "<<area<< "\nThe perimeter of the Triangle is " <<perimeter;
	
	return 0;
}
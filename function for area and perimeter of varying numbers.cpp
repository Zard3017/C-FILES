//function for getting area and perimeter of circle 
#include<iostream>
using namespace std;
float  area(float length)
{
	
	float a;
	a=length*length;
	return a;
}
float perimeter(float length)
{
	float b;
	b=length*4;
	return b;
}
int main(){
	float c,length;
	cout<<"Enter length of square ";
	cin>>length;
	c=area(length);
	
	float d;
	d=perimeter(length);
	cout<<"The area is: "<<c<<endl;
	cout<<"The perimeter is: "<<d<<endl;
	return 0;
}

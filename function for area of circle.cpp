//function for getting area and perimeter of circle 
#include<iostream>
using namespace std;

float area(int rad )
{
	float z;
	z=3.14*rad*rad;
	return z;
}
float perimeter(int rad)
{
	float g;
	g=3.14*(rad+rad);
	return g;
}
int main(){
	float y;
	y=area(15);
	cout<<"The area is "<<y;      
	
	float j;
	j=perimeter(15);
	cout<<"The perimeter is "<<j;      
	return 0;
	
}

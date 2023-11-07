//function getting area of a triangle
#include<iostream>
using namespace std;

int Atriangle ( int w, int b)
{
	int h;
	h=0.5*b*w;
	return h;
}
int main(){
	int g;
	g=Atriangle(3,4);
	cout<<"The area is "<<g;
	return 0;
}
	

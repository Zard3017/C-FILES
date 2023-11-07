//function for getting volume of a cylinder
#include<iostream>
using namespace std;

float volume(int rad, int height)
{
	float a;
	a=3.142*rad*rad*height;
	return a;
}
int main(){
	float b;
	b=volume(13,15);
	cout<<"The volume is "<<b;
	return 0;
	
}

	
	
	

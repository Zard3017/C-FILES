//functions
#include<iostream>
using namespace std;

int onyx(int x, int y)
{
	int z;
	z=x+y;
	return z;
}
int main ()
{
	int c,f,g,h;
	c=onyx(3,5);
	cout<<"The result 1 is "<<c<<endl;
	
	f=onyx(1994,19);
	cout<<"The result 2 is "<<f<<endl;
	
	g=onyx(20,39);
	cout<<"The result 3 is "<<g<<endl;
	
	h=onyx(65,80);
	cout<<"The result 4 is "<<h<<endl;
	return 0;
}
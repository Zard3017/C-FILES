#include<iostream>

using namespace std;
int main(){
	//declaring and initianizing using an intitializer
	float myarray[6]{12.25,32.4,23.45,23.98,89.49,37.91};
	//cout<<myarray[3];
	//sum of elements in index 2 & 3
	float g;
	g=myarray[2]+myarray[5];
	cout<<g;
	return 0;
}
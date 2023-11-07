#include<iostream>
using namespace std;
int main(){
	//declaring and initianizing using an intitializer
	float myarray[6]{12.25,32.4,23.45,23.98,89.49,37.91};
	for(int i=0;i<=5;i++)
	{
		cout<<myarray[i]<<endl;
	}

	return 0;
}
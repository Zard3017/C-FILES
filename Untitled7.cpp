//checking whether floating number is positive or negative


#include <iostream>
using namespace std;
int main(){

	

	int num;
	cout<<"Input the number ";
	cin>>num;
	char character;
	cout<<"Input the character ";
	cin>>character;
	
	
	if(character=='S')

	{
	
		cout<<"The square is "<<num*num;
	}
	else if(character=='C')
	{
		cout<<"The cube is "<<num*num*num;
	}
	else
	{
		cout<<"Invalid choice";
	}

	
	return 0;
}

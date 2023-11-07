//checking whether floating number is positive or negative


#include <iostream>
using namespace std;
int main(){
	int num,output;
	char choice;
	
	cout<<"Input the number ";
	cin>>num;
	cout<<"Input the character ";
	cin>>choice;
	
	
	if(choice=='S'||choice=='s')
	// logical operator or is || e.g if (choice=='s') || (choice=='S')
	

	{
		output=num*num;
		cout<<"The square is "<<output;
	}
	else if(choice=='C')

	{
		output=num*num*num;
		cout<<"The cube is "<<output;
	
	}
	else
	{
		cout<<"Invalid input";
	}
	
	
	return 0;
}

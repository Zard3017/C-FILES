#include<iostream>
using namespace std;
bool isEven(int num)
{
	return num%2==0;
}
bool isOdd(int num)
{
	return num%2!=0;
}
int main(){
	int number;
	cout<<"Input number: ";
	cin>>number;
	
	if(isEven(number))
	{
		cout<<"It is an even number";
	}else
	{
		cout<<"It is an odd number: ";
	}
	return 0;
}


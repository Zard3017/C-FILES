#include <iostream>
using namespace std;
int main(){
	int num1,num2,num3;
	
	cout<<"Input num 1 ";
	cin>>num1;
	
	cout<<"Input num 2 ";
	cin>>num2;
	
	cout<<"Input num 3 ";
	cin>>num3;
	
	if(num1>num2 && num1>num3)
	{
		cout<<"Num 1 is the maximum";
	}
	
	else if(num2>num1 && num2>num3)
	{
		cout<<"Num 2 is the maximum";
	}
	else if(num3>num1 && num3>num2)
	{
		cout<<"Num 3 is the maximum";
	}
	return 0;
}
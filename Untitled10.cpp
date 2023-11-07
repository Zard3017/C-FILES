// program for getting sum,average,product

#include <iostream>

using namespace std;
int main(){
	float num1,num2,num3,sum,average,product;
	cout<<"Input the first number ";
	cin>>num1;
	cout<<"Input the second number ";
	cin>>num2;
	cout<<"Input the third number ";
	cin>>num3;
	
	sum=num1+num2+num3;
	average=(num1+num2+num3)/3;
	product=num1*num2*num3;
	
	cout<<"The sum is "<<sum<<"\nThe average is "<<average<<"\nThe product is "<<product;
	return 0;
}
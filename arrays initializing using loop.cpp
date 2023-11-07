#include<iostream>
using namespace std;
int main(){
	//declaring using initializer
	int cocacola[6];
	int sum=0;
	for(int i=0; i<=5; i++)
	{

	cout<<"Input the number of cocacola cans sold : ";
	cin>>cocacola[i];
	sum=sum+cocacola[i];
	}
	cout<<"The sum is "<<sum;

	//cout<<myarray[3];
	//sum of elements in index 2 & 3
	
	return 0;
}
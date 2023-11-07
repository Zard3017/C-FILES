// program that computes simple interest

#include <iostream>
using namespace std;

int main(){
	float principal, rate , duration, interest;
	
	
	cout<<"Input the principal ";
	cin>>principal;
	cout<<"Input the rate";
	cin>>rate;
	cout<<"Input duration";
	cin>>duration;
	
	interest=principal*(rate/100)*duration;
	cout<<"The simple interest is "<<interest;
	return 0;
	
}
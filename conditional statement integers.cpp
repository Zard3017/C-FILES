//conditional structures
#include <iostream>
using namespace std;
int main(){
	int num,t,f;
	
	cout<<"Input  a number";
	cin>>num;
	if(num<6)

	{
		t=num*10;
		cout<<"The result is"<<t;
	}
	else
	{
		f=num*5;
		cout<<"The answer is"<<f;
	}
	
	return 0;
}
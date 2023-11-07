#include <iostream>
using namespace std;
int main(){
	int age1,age2,age3;

	
	cout<<"Input the ages ";
	cin>>age1>>age2>>age3;
	
	if(age1>age2 &&age1>age3)
	{
		cout<<age1<<" is the oldest";
	}
	else if(age2>age1 && age2>age3)
	{
		cout<<age2<<" is the oldest";
	}
	else if(age3>age2&&age3>age1)
	{
		cout<<age3<<" is the oldest";
	}
	return 0;
}

	
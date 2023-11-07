#include <iostream>
using namespace std;

int main(){
	float gpa;
	
	cout<<"Input gpa ";
	cin>>gpa;
	
	if(gpa>=3.5)
	{
		cout<<"You have made it to the Dean's List";
	}
	else if(gpa>=2.0)
	{
		cout<<"Your gpa is ok";
	}
	else
	{
		cout<<"Please see the administrartor";
	}
	return 0;
}
#include <iostream>
using namespace std;
int main(){
	int num;
	
	cout<<"Input the number ";
	cin>>num;
	
	if(num%5==0 && num%11==0)
	{
		cout<<"It is divisible by 5 and 11";
	}
	else
	{
		cout<<"It is not divisible by 5 and 11";
	}

	return 0;
}
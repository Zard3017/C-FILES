//program for getting modulus
#include <iostream>

using namespace std;
int main(){
	int num1, num2, ans;
	
	cout<< "Input the first integer";
	cin>>num1;
	cout<< "Input the second integer";
	cin>>num2;
	
	ans=num1%num2;
	cout<< "The answer is "<<ans;
	return 0;
	
	
}
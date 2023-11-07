#include<iostream>
#include<cctype>
using namespace std;
bool isUppercase(char character)
{
	return isupper(character);
}
bool isLowercase(char character)
{
	return islower(character);
}
int main(){
	char character;
	cout<<"Input character: ";
	cin>>character;
	if(isUppercase(character))
	{
		cout<<character<<" alphabet is uppercase ";
	}else if(isLowercase(character))
	{
		cout<<character<<" alphabet is lowercase ";
	}else
	{
		cout<<character<<" it is not an alphabet ";
	}
	return 0;
}

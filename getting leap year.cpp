// programs which reads a year and decides whether its leap year

#include <iostream>
using namespace std;
int main(){
	int year;
	
	cout<<"Input the year ";
	cin>>year;
	if(year%4==0)

	{
		
		cout<<"It is a leap year ";
	}
	else
	{
		
		cout<<"The year is not leap year ";
	}
	
	return 0;
}
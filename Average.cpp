#include <iostream>
using namespace std;
int main(){
	
	int percentage,mark1,mark2,mark3,mark4,mark5,average;
	
	
	cout<<"Physics ";
	cin>>mark1;
	
	cout<<"Chemistry ";
	cin>>mark2;
	
	cout<<"Biology ";
	cin>>mark3;
	
	cout<<"Mathematics ";
	cin>>mark4;
	
	cout<<"Computer ";
	cin>>mark5;
	
	average=(mark1+mark2+mark3+mark4+mark5)/5;
	
	
	if(average>=90 && average<=100)
	{
		cout<<"Grade A";
	}
	else if(average>=80 && average<=89)
	{
		cout<<"Grade B";
		
	}
	else if(average>=70 && average<=79)
	{
		cout<<"Grade C";
	}
	else if(average>=60 && average<=69)
	{
		cout<<"Grade D";
	}
	else if(average>=40 && average<=59)
	{
		cout<<"Grade E";
	}
	else if(average<40 && average>0)
	{
		cout<<"Grade F";
	}
	else
	{
	cout<<"Invalid input";
	}
	
	
	return 0;
}
	

	
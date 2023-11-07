#include <iostream>
using namespace std;

int main(){
	int sales,commission_1,commission_2,commission_3;
	string name;
	 
	
	cout<<"Input your name: ";
	cin>>name;
	cout<<"Input your monthly sales: ";
	cin>>sales;
	
	
	
	commission_1=(0.02*sales);
	commission_2=(0.05*sales);
	commission_3=(0.1*sales);
	if(sales>=20,000 && sales<=80,000 )
	{
		cout<<"Commission due is: "<<commission_1;
	}
	else if(sales>=80001 && sales<=120000)
	{
		cout<<"Commission due is: "<<commission_2;
	}
	else if(sales>120000)
	{
		cout<<"Commission due is: "<<commission_3;
	}
	else
	{
		cout<<"Invalid output";
	}
}
//checking whether 


#include <iostream>
using namespace std;
int main(){
	int price;
	
	cout<<"Input the price ";
	cin>>price;
	
	

	if(price>30000)

	{
		
		cout<<"The discount received is "<<0.1*price;
	}
	else if(price<=30000)
	{
		cout<<"The discount received is "<<0.02*price;
	}
	
	return 0;
}
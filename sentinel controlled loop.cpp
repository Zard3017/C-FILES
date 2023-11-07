//allow user to input integers and sum them until they enter 0 to quit
#include<iostream>
using namespace std;

int main(){
	//declare variables for integer and sum
	int z,sum;
	//loop structure
	while(z!=0){
		cout<<"Enter an integer(enter 0 to quit) : ";
		cin>>z;
		sum=sum + z;
		cout<<sum<<endl;
		
	}
}
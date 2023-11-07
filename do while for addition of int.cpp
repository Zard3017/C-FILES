#include<iostream>
using namespace std;

int main(){
	int sum=0;
	int x=73;
	do
	{
		sum+=x;
		x++;
	}while(x<=415);
	cout<<"The sum is: "<<sum<<endl;
}
#include<iostream>
using namespace std;
int main(){
	int myarray[10]{2,4,6,8,10,1,3,5,7,9};
	int i;
	for(int i=9;i>=0;i--)
	{
		cout<<myarray[i]<<endl; 
	}
	
	return 0;
}
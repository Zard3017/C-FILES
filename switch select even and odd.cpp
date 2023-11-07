#include <iostream>
using namespace std;

int main(){
	int num;
	
	cout<<"Input speed ";
	cin>>num;
	
	switch(num){
		case 100:
		cout<<"Normal speed range "; 
		break;
		case 101:
		cout<<" Warning! You are overspeeding";
		break;
		case 88:
		cout<<"Low Oil Pressure";
		break;
		case 187:
		cout<<"Engine Failure";
		default:
			cout<<"Invalid";
	}
	return 0;
}
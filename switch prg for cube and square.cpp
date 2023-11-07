#include <iostream>
using namespace std;

int main(){
	int num=15;
	char ch;
	
	cout<<"1.Input character";
	cin>>ch;
	

	switch(ch){
		case 'S':
		cout<<"The square of 15 is "<<num*num <<endl;
		break;
		case 'C':
		cout<<"The cube is "<<num*num*num<<endl;
		break;
		default:
			cout<<"Invalid choice";
	}
	return 0;
}
#include <iostream>
using namespace std;

int main(){
	int x;
	
	cout<<"Input value of x ";
	cin>>x;
	
	switch(x){
		case 1:
		cout<<"It is a busy day "<<endl; 
		break;
		case 3 :
		cout<<" Good"<<endl;
		break;
		case 4:
		cout<<"Good";
		break;
		default:
			cout<<"Invalid";
	}
	return 0;
}
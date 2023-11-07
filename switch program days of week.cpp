#include <iostream>
using namespace std;

int main(){
	int day;
	cout<<"1.Monday\n";
	cout<<"2.Tuesday\n";
	cout<<"3.Wednesday\n";
	cout<<"4.Thursday\n";
	cout<<"5.Friday \n";
	cout<<"6.Saturday\n";
	cout<<"7.Sunday\n";
	cin>>day;
	switch(day){
		case 1:
		cout<<"Monday";
		break;
		case 2:
		cout<<"Tuesday";
		break;
		case 3:
		cout<<"Wednesday";
		break;
		case 4:
		cout<<"Thursday";
		break;
		case 5:
		cout<<"Friday";
		break;
		case 6:
		cout<<"Saturday";
		break;
		case 7:
		cout<<"Sunday";
		break;
		
		default:
			cout<<"Invalid option";
	}
	return 0;
}
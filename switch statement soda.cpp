#include <iostream>
using namespace std;
int main(){
	int choice;
	cout<<"1.Coke";
	cout<<"2.Water";
	cout<<"3.Sprite";
	cout<<"4.Fanta";
	cout<<"5.Fresh juice";
	cin>>choice;
	
	switch(choice){
		case 1 : //Coke
		cout<<"You have chosen Coke";
		break;
		case 2: //Water
		cout<<"You have chosen Water";
		break;
		case 3://Sprite
		cout<<"You have chosen Sprite";
		break;
		case 4://Fanta
		cout<<"You have chosen Fanta";
		break;
		case 5://Fresh juice
		cout<<"You have chosen Fresh juice";
		break;
		default:
			cout<<"Error. Choice was not valid; here is your money back";
	}
	return 0;
}


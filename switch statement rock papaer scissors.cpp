#include <iostream>
using namespace std;

int main(){
	// user choice
	int choice; // variable
	
	cout<<"Enter your move: ";
	cout<<"1.Rock   "  ;
	cout<<"2.Paper   "  ;
	cout<<"3.Scissors  ";
	cin>>choice;
	//selective structure
	switch(choice){
		case 1: // computer - rock v. user - rock
		cout<<"It's a tie";
		break;
		case 2: // computer - rock v. user - paper
		cout<<"You won";
		break;
		case 3: // computer - rock v.user - scissors
		cout<<"You lost ";
		break;
		default:
			cout<<"Select a valid choice";
	}
	return 0;
	
}                                   
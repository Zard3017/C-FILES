#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	//initialize random no.
	int randomnum =rand()%39+12;
	int numofguesses=0;
	
	int guess;
	cout<<"Enter the number you guessed: ";
	cin>>guess;
	
	while(guess!=randomnum && numofguesses<5){
		
		if(guess>randomnum)
		{
			cout<<"Too high"<<endl;
		}else
		{
			cout<<"Too low"<<endl;
		}
		cout<<"Guess again ";
		cin>>guess;
		
	}
	if(guess == randomnum)
	{
		cout<<"Well done. Your guess is correct";
	}else
	{
		cout<<"Sorry you have run out of guesses: ";
	}
	return 0;
	
	
}
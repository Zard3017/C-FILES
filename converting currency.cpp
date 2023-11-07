//program for converting dollars to kenyan shillings
#include <iostream>
using namespace std;
int main(){
	//1 dollar= 101.43 kenyan shillings
	// val for dollar
	int $;
	// value for kenyan shlling
	int shilling;
	//exchange rate
	float  x;
	//values
	$=500;
	x=101.43;
	shilling = $ * x;
	
	cout<<"500 dollars is equivalent to "<<shilling<<" Kenyan Shillings";
	return 0;

	
}
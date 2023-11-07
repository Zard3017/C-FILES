// program that computes the profit made after selling vehicle

#include<iostream>

using namespace std;
int main(){
	//variable for selling price
	int sp;
	//variable for buying price
	int bp;
	//variable for profit
	int p;
	
	//values
	sp = 580000;
	bp = 450000;
	//get the profit
	p= sp - bp;
	cout<<"The Profit Made is ";
	cout<<p;
	return 0;
}
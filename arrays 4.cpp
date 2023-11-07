#include<iostream>
using namespace std;
int main(){
	int num[10];
	
	 for (int i = 0; i < 10; i++) {
    cout << "Enter a number: ";
    cin >> num[i];
  }
    cout << "Array elements in index ascending order: ";
  for (int i = 0; i <=9; i++) {
    cout << num[i] <<endl;
  }
  
  cout << "Array elements in index descending order: ";
  for (int i= 9; i >= 0; i--) {
    cout << num[i] ;
  }
  cout << endl;
	int sum=0;
	for(int i=0;i<=9;i++)
	{
		
		sum=sum+num[i];
	}
	cout<<"The sum is"<<sum;
	
	return 0;
}
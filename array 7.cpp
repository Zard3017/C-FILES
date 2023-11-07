#include <iostream>
using namespace std;

int main() {
  // Declare a character array
  char arr[] = {'A','B','C','D','E'};

  // Reverse the array elements
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) / 2; i++) {
    char temp = arr[i];
    arr[i] = arr[sizeof(arr) / sizeof(arr[0]) - i - 1];
    arr[sizeof(arr) / sizeof(arr[0]) - i - 1] = temp;
  }

  // Print the reversed array elements
  cout << "Reversal order: ";
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
    cout << arr[i];
  }
  cout << endl;
  
  float miles[4]={44.4,22.3,11.6,33.3};
  int sum=0;
  for(int i=0 ;i<=4;i++)
  	
	{
	cout<<"Input the milesPerGallon : ";
	cin>>miles[i];
	sum=sum+miles[i];
	}
	cout<<"The sum is "<<sum;

  return 0;
}

#include <iostream>
using namespace std;
int main(){
	int digit;
	char value;
	cout<<"1.Input digit";
	cin>>digit;
switch (digit) {
    case 6:
      value = 'A';
      break;
    case 0:
    case 1:
    case 2:
      value = 'C';
      break;
    case 4:
    case 5:
      value = 'B';
      break;
    default:
      value = 'D';
  }

  cout << "The value of the digit is " << value << endl;

  return 0;
}
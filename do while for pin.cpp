#include <iostream>

using namespace std;
int main() {
  // Initialize the correct PIN.
  int correctpin = 1234;
  int attempts = 0;

  do {
    int enterPIN;
    cout << "Enter your PIN: ";
    cin >> enterPIN;
    
    if (enterPIN == correctpin) {
      cout << "PIN verified." << endl;
      cout << "Welcome!" << endl;
      break;
    }

   
    else {
      attempts++;
    }
  } while (attempts < 4);

  
  if (attempts == 4) {
    cout << "Limit expired." << endl;
    return 1;
  }

  return 0;
}

#include <iostream>

using namespace std;

int main() {
  // Initialize the variables
  int units, charge;
  double surcharge = 1.2;

  
  cout << "Enter the number of electricity units consumed: ";
  cin >> units;

  
  if (units <= 50) {
    charge = units * 10;
  } else if (units <= 150) {
    charge = 50 * 10 + (units - 50) * 20;
  } else if (units <= 250) {
    charge = 50 * 10 + 100 * 20 + (units - 150) * 30;
  } else {
    charge = 50 * 10 + 100 * 20 + 100 * 30 + (units - 250) * 50;
  }

  // Add a surcharge of 20%
  charge *= surcharge;

  
  cout << "The total electricity bill amount is kes. " << charge << endl;

  return 0;
}
#include <iostream>

using namespace std;

int main() {
  // Declare variables
  int day = 1;
  int amount = 2;
  int total_amount = 0;

  // While loop to iterate for 6 days
  while (day <= 6) {
    // Add the amount to the total amount
    total_amount += amount;

    // Double the amount
    amount *= 2;

    // Increment the day
    day++;
  }

  // Print the total amount
  cout << "The total amount saved is " << total_amount << endl;

  return 0;
}
#include <iostream>
using namespace std;
int main() {
  
  int totalsaved = 2;
  int numofdays = 1;

  
  while (numofdays <= 6) {
    // Double the amount saved on the current day.
    totalsaved *= 2;

    // Increment the number of days.
    numofdays++;
  }
  cout << "The total amount saved for the 6 days is: " << totalsaved << endl;

  return 0;
}

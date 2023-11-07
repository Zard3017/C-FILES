#include <iostream>

using namespace std;
int main() {
  
  int accidents,age,total_charge,accident_surchage,basic_charge;
  cout << "Enter the driver's age: ";
  cin >> age;

  cout << "Enter the number of accidents: ";
  cin >> accidents;
  basic_charge = 20000;

  if (age < 25) {
    basic_charge += 8000;
  }

  int accident_surcharge = 0;
  if (accidents == 1) {

    accident_surcharge = 4250;
  } else if (accidents == 2) {
    accident_surcharge = 10600;
  } else if (accidents == 3) {
    accident_surcharge = 19100;
  }

  total_charge = basic_charge + accident_surcharge;
  cout << "The total insurance premium is Ksh " << total_charge << endl;
  return 0;
}
#include <iostream>
using namespace std;

bool is_leap_year(int year) {
  return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

bool is_valid_date(int day, int month, int year) {
  if (month < 1 || month > 12) {
    return false;
  }

  if (day < 1 || day > 31) {
    return false;
  }

  // February has 29 days in a leap year and 28 days in a non-leap year.
  if (month == 2) {
    return is_leap_year(year) ? day <= 29 : day <= 28;
  }

  // The remaining months all have 30 days.
  return true;
}

int main() {
  // Get the date from the user.
  int day;
  int month;
  int year;
  cout << "Enter the day: ";
  cin >> day;
  cout << "Enter the month: ";
  cin >> month;
  cout << "Enter the year: ";
  cin >> year;

  // Check if the date is valid.
  bool is_valid = is_valid_date(day, month, year);

  // Output the result.
  if (is_valid) {
    cout << "The date is valid." << endl;
  } else {
    cout << "The date is invalid." << endl;
  }

  return 0;
}

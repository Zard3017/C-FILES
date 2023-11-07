#include <iostream>
using namespace std;

int main() {
  
  int age,ticket_price;
  string county;
  cout << "Enter the age of the visitor: ";
  cin >> age;
  cout << "Enter the county of residence of the visitor: ";
  cin >> county;

  
  ticket_price = 1500;

  
  if (age < 5) {
    ticket_price = 0;
  }

  // Senior citizens aged 65 and above receive a 50% discount.
  if (age >= 65) {
    ticket_price = ticket_price * 0.5;
  }

  // Residents of Kibwezi County get a discount on tickets.
  if (county == "Kibwezi") {
    ticket_price = 1000;
  }

  // Output the cost of the ticket.
  cout << "The cost of the ticket is Ksh " << ticket_price << endl;

  return 0;
}

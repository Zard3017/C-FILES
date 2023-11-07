#include <iostream>

using namespace std;
int main() {
  
  int ticket_price,discounted_ticket,age,discount_senior;
  string county;
  cout<<"Input the age of visitor: ";
  cin>>age;
  cout<<"Input county of residence of the visitor: ";
  cin>>county;
  
  discounted_ticket=1000;
  discount_senior=0.5*ticket_price;
  
  if(age<5)
  {
  	ticket_price=0;
  }
  if(age>=65)
  {
  	discount_senior;
  }
  if(county=="Kibwezi")
  {
  	ticket_price=1000;
  }
  
  	cout<<"The ticket price is "<<ticket_price;
  	return 0;
}
 

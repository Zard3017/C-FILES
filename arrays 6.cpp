#include <iostream>
using namespace std;

int main() {
 
  int collections[7];

 
  for (int i = 0; i <=7; i++) {
    cout << "Enter the weekly collection amount for day" << i + 1<< " ";
    cin >> collections[i];
  }

  int total_collection = 0;
  for (int i = 0; i < 7; i++) {
    total_collection += collections[i];
  }

  float average_collection = total_collection / 7;
  int minimum_collection = collections[0];
  int maximum_collection = collections[0];
  for (int i = 1; i < 7; i++) {
    if (collections[i] < minimum_collection) {
      minimum_collection = collections[i];
    }

    if (collections[i] > maximum_collection) {
      maximum_collection = collections[i];
    }
  }

  cout << "Total collection: " << total_collection << endl;
  cout << "Average collection: " << average_collection << endl;
  cout << "Minimum collection: " << minimum_collection << endl;
  cout << "Maximum collection: " << maximum_collection << endl;

  return 0;
}

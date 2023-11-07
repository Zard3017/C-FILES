#include <iostream>
#include <random>

using namespace std;

// Function to generate a random 5-digit number
int generateRandomId() {
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dist(10000, 99999);

  // Generate a random number between 10000 and 99999
  int randomNumber = dist(gen);

  return randomNumber;
}

int main() {
  // Generate a random 5-digit ID
  int id = generateRandomId();

  // Print the ID to the console
  cout << "Random ID: " << id << endl;

  return 0;
}

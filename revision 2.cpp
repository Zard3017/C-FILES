#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  int random_number = rand() % 41 + 56;
  cout << random_number << endl;

  return 0;
}
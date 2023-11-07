// Write a program using a loop to output all the letters of the alphabet in uppercase.
#include<iostream>
using namespace std;

int main(){

  char ch = 'A';

  while (ch <= 'Z') {
    cout << ch << endl;
    ch++;
  }

  return 0;
}

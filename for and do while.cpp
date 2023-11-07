#include <iostream>
using namespace std;
int main() {
  int K = 5;
  int W = -2;
  int P;

  do {
    K=K-1;
    P = W + K;
    cout << P << endl;

    W += 2;
  } while (W <= K);

  return 0;
}
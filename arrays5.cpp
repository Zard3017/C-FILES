#include<iostream>

using namespace std;
int main(){
	int num[]={45,34,24,57,78,69,48};
	int n = sizeof(num[0]);

    int maxNum = num[0];
    int minNum = num[0];

   
    for (int i = 1; i < n; i++) {
        if (num[i] >=maxNum) {
            maxNum = num[i];
        }
        if (num[i] <= minNum) {
            minNum = num[i];
        }
    }
    cout << "Maximum element: " << maxNum << endl;
    cout << "Minimum element: " << minNum << endl;
      

  return 0;
}
	
	
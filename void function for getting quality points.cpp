//function for quality points
#include<iostream>
using namespace std;

void qualityPoints(int average){
	
	
	if (average >= 90 && average <= 100) {
        cout<< 4;
    } else if (average >= 80 && average < 90) {
        cout<< 3;
    } else if (average >= 70 && average < 80) {
        cout<< 2;
    } else if (average >= 60 && average < 70) {
        cout<< 1;
    } else {
        cout<< 0;
    }
}
	
int main() {
	int m;
	cout<<"Input the student's average: ";
	cin>>m;
	qualityPoints(m);
	cout<<"The student's average is "<<m<<endl;
	
}
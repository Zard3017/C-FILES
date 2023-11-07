//function for quality points
#include<iostream>
using namespace std;

int qualityPoints(int average){
	
	
	if (average >= 90 && average <= 100) {
        return 4;
    } else if (average >= 80 && average < 90) {
        return 3;
    } else if (average >= 70 && average < 80) {
        return 2;
    } else if (average >= 60 && average < 70) {
        return 1;
    } else {
        return 0;
    }
}
	
int main() {
	int average;
	cout<<"Input the student's average: ";
	cin>>average;
	int points = qualityPoints(average);
	cout<<"The student's average is "<<points<<endl;
	
}

	
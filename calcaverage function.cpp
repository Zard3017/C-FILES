#include <iostream>
#include<cmath>
using namespace std;
void calcAverage(float num1,float num2, float num3){
	float average=(num1+num2+num3)/3.0;
	cout<<"The average is:  "<<average<<endl;

}

int main(){
	int score1,score2,score3;
	cout<<"Input score 1: ";
	cin>>score1;
	cout<<"Input score 2: ";
	cin>>score2;
	cout<<"Input score 3: ";
	cin>>score3;


	calcAverage(score1,score2,score3);
	return 0;
}
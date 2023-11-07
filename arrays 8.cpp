#include <iostream>
using namespace std;

const int items = 10;
const int MONTHS = 12;

int main() {
    double yearlyBudget[items][MONTHS];

    // Initialize the yearly budget for each item and month (for example)
    for (int item = 0; item < items; ++item) {
        for (int month = 0; month < MONTHS; ++month) {
            yearlyBudget[item][month] = 0.0; 
        }
    }

    yearlyBudget[0][0] = 1000.0; 
    yearlyBudget[1][5] = 500.0; 

    
    for (int item = 0; item < items; ++item) {
        for (int month = 0; month < MONTHS; ++month) {
            std::cout << "Item " << item << " Month " << month << ": $" << yearlyBudget[item][month] << std::endl;
        }
    }

    return 0;
}

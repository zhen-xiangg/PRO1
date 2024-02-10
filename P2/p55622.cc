#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    int count = 1;
    int variable = number;
    while (variable >= 10){
        ++ count;
        variable = variable/10;
    }
    cout << "The number of digits of " << number << " is " << count << "." << endl;
}
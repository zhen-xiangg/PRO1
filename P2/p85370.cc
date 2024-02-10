#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    int originalNumber = number;      
    int even_position_sum = 0;
    int position = 0;    
    while (number > 0) {
        int digit = number % 10;        
        if (position % 2 == 0) { 
            even_position_sum += digit;
        }        
        number /= 10;
        position++;
    }
    if (even_position_sum % 2 == 0) {
        cout << originalNumber << " IS COOL" << endl;
    } 
    else {
        cout << originalNumber << " IS NOT COOL" << endl;
    } 
}
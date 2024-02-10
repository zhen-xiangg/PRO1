#include <iostream>
using namespace std;

int main() {
    int number;
    while (cin >> number) {
        int original_number = number;
        int sum = 0;
        while (number > 9) {
            sum += number%10;
            number /= 10;
        }
        cout << "The sum of the digits of " << original_number << " is " << sum + number << "." << endl;
    }
}
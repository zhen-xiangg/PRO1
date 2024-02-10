#include <iostream>
using namespace std;

int main() {
    int b;
    cin >> b;
    int number;
    while (cin >> number) {
        int original_number = number;
        int sum = 0;
        while (number > 0) {
            sum += number%b;
            number /= b;
        }
        cout << original_number << ": " << sum + number << endl;
    }  
}
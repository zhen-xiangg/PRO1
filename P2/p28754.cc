#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    if (number == 0){
        cout << 0;
    }
    else {
        while (number != 0){
            cout << number%2;
            number = number/2;
        }
    }
    cout << endl;
}

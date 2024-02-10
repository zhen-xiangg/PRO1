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
            int result = number%16;
            if (result < 10){
                cout << number%16;
            }
            else{
                cout << char(result -10 +'A');
            }
            number = number/16;
        }
    }
    cout << endl;
}

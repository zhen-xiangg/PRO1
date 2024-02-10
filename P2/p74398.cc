#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    int x = 2;
    int o_number = number;
    while (x <= 16){
        int y = 0;
        number = o_number;
        while (number != 0){
            number = number/x;
            ++y;
        }
        cout << "Base " << x << ": " << y << " cifras." << endl;
        ++x;
    }
}

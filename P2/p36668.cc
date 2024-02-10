#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    int i = 1;
    int result = 0;
    while (i <= number) {
        result += i*i;
        i += 1;
    }
    cout << result << endl;
}
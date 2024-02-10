#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n >= 100) {
        int ultims = n % 1000;
        int suma = 0;
        while (ultims > 0) {
            suma += ultims % 10;
            ultims /= 10;
        }
        cout << suma << endl;
    }
    
}
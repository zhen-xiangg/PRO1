#include <iostream>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        int i = a;
        int sum = 0;
        while (i <= b) {            
            sum += i * i * i; 
            ++i;
        }
        cout << "suma dels cubs entre " << a << " i " << b << ": " << sum << endl;
    }
}
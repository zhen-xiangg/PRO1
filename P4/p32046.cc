#include <iostream>
using namespace std;

int main () {
    int sequencia1, sequencia2, count = 0;
    cin >> sequencia1;
    cout << "nombres que acaben igual que " << sequencia1 << ":" << endl; 
    sequencia1 %= 1000;
    while (cin >> sequencia2) {
        if (sequencia1 == sequencia2%1000) {
            ++count;
            cout << sequencia2 << endl;
        }
            
    }
    cout << "total: "<< count << endl;
}
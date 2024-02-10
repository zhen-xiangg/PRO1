#include <iostream>
using namespace std;

void reverse(int& n) {
    string sentence;
    if (cin>>sentence) {
        reverse(n);
        if (n > 0) {
            cout << sentence << endl;
            --n;
        }
    }
}

int main () {
    int n;
    cin >> n;
    reverse(n);
}

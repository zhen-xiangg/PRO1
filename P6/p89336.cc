#include <iostream>
using namespace std;

void reverse(int& n, int& count) {
    string sentence;
    if (cin>>sentence) {
        ++count;
        ++n;
        reverse(n, count);
        --n;
        if (n < (count/2)) cout << sentence << endl;
    }
}

int main () {
    int n = 0, count = 0;
    reverse(n, count);
}
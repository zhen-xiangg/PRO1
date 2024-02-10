#include <iostream>
using namespace std;

void reverse () {
    string sentence;
    if (cin>>sentence) {
        reverse ();
        cout << sentence << endl;
    }
}

int main () {
    reverse ();
}


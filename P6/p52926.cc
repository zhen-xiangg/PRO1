#include <iostream>
using namespace std;

void reverse () {
    string sentence;
    if (cin>>sentence and sentence != "end") {
        reverse ();
        cout << sentence << endl;
    }
}

int main () {
    reverse ();
}

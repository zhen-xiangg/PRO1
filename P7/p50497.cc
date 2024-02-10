#include <iostream>
#include <vector>
using namespace std;

bool is_palindrome(const string& s) {
    int n = s.size();
    int i = 0;
    int last = n -1;
    bool palindrome = true;
    while (i<last and palindrome) {
        if (s[i] != s[last]) palindrome = false;
        i += 1;
        last -=1;
    }
    return palindrome;
}

int main() {
    string s;
    while (cin >> s) {
        cout << is_palindrome(s) << endl;
    }
}
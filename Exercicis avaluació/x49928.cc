#include <iostream>
using namespace std;

int main () {
    int count = 0, count_a = 0, count_b = 0;
    char character;
    bool start_count = false;
    while (cin >> character) {
        if (start_count) {
            if (character == 'a') ++count_a;
            else if (character == 'b') ++count_b;
        }
        if (character == '?' or character == '.' or character == '!') {
            if (count_a > count_b) ++count;
            count_a = 0;
            count_b = 0;
            start_count = false;
        }
        if (character == '?') start_count = true;   
    }
    cout << count << endl;
}
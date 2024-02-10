#include <iostream>
using namespace std;

int main () {
    string word;
    bool error_b = true, error_o = true, start_count = false, stop_count = false;
    int count = 0;
    while (cin >> word and !stop_count) {
        if (word == "end") {
            if (!error_b) {
                stop_count = true;
                error_o = false;
            }
        }
        if (start_count and !stop_count) ++count;
        if (word == "beginning")  {
            start_count = true;
            error_b = false;
        }
    }
    if (error_b or error_o) cout << "wrong sequence" << endl;
    else cout << count << endl;
}
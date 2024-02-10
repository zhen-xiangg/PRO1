#include <iostream> 
using namespace std;

int main() {
    string s;
    while (cin >> s) {
        int n, count = 0, max = -1, sec = -1;
        while (cin >> n and n != -1) {
            if (count == 0) {
                max = n;
                ++count;
            }
            else if (count == 1) {
                ++count;
                if (n >= max) {
                    sec = max;
                    max = n;
                }
                else sec = n;
            }
            else {
                if (n >= max) {
                    sec = max;
                    max = n;
                }
                else if (n > sec) sec = n;
            }
        }
        cout << s << ": " << max << " " << sec << endl;
    }
}
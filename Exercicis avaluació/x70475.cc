#include <iostream>
using namespace std;

int main() {
    char ch1, ch2, ch3;
    int happiness = 0, sadness = 0, count = 0;
    while (cin >> ch3) {
        if (count == 0) {
            ch1 = ch3;
            ++count;
        }
        else if (count==1) {
            ch2 = ch3;
            if (ch1 != ch2) ++count;
        }
        else {
            if (ch2 != ch3) {
                if ((ch1 == ':' and ch2 == '-' and ch3 == ')') or (ch1 == '(' and ch2 == '-' and ch3 == ':')) ++happiness;
                if ((ch1 == ':' and ch2 == '-' and ch3 == '(') or (ch1 == ')' and ch2 == '-' and ch3 == ':')) ++sadness;
                ch1 = ch2;
                ch2 = ch3;               
            }
        }
    }
    cout << happiness << " " << sadness << endl;    
}   
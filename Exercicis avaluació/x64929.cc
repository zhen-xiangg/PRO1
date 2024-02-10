#include <iostream>
using namespace std;

int main() {
    char ch1, ch2, ch3;
    int happiness = 0, sadness = 0;
    cin >> ch1 >> ch2 >> ch3;
    if (ch1 == ':') {
        if (ch2 == '-') {
            if (ch3 == ')') ++happiness;
            else if (ch3 == '(') ++sadness;
        } 
    }
    else if (ch3 == ':') {
        if (ch2 == '-') {
            if (ch1 == '(') ++happiness;
            else if (ch1 == ')') ++sadness;
        } 
    }
    ch1 = ch2;
    ch2 = ch3;
    while (cin >> ch3) {
        if (ch1 == ':') {
            if (ch2 == '-') {
                if (ch3 == ')') ++happiness;
                else if (ch3 == '(') ++sadness;
            } 
        }
        else if (ch3 == ':') {
            if (ch2 == '-') {
                if (ch1 == '(') ++happiness;
                else if (ch1 == ')') ++sadness;
            } 
        }
        ch1 = ch2;
        ch2 = ch3;
    }
    cout << happiness << " " << sadness << endl;
}   
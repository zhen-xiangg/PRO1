#include <iostream>
#include <vector>
using namespace std;

int numberSubsequences(const string &s, char c1, char c2, char c3){
    int c1Count = 0; 
    int c1c2Count = 0; 
    int c1c2c3Count = 0; 
    for( int i = 0; i < s.size(); ++i){
        if(s[i] == c1)c1Count += 1;
        else if(s[i] == c2)c1c2Count += c1Count; 
        else if(s[i] == c3)c1c2c3Count += c1c2Count; 
        }
    return c1c2c3Count;
}

int main() {
    string sentence;
    while (cin >> sentence) {
        cout << numberSubsequences(sentence, ':', '-', ')') + numberSubsequences(sentence, '(', '-', ':') << " " << numberSubsequences(sentence, ':', '-', '(') + numberSubsequences(sentence, ')', '-', ':') << endl;
    }
}
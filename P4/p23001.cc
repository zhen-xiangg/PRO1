#include <iostream>
using namespace std;

int main () {
    string word_1, word;
    int result = 1;
    cin >> word_1;
    int count = 1;
    while (cin >> word) {
        if (word_1 == word) ++count;
        else if (word_1 != word) count = 0;
        if (count > result) result = count;    
    }     
    cout << result << endl;
}
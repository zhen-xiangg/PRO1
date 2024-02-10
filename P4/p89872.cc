#include <iostream>
using namespace std;

int main() {
    string leter, max_1, max_2;
    int count = 0;
    while (cin >> leter) {
        if (count == 0) {
            max_1 = leter;
            ++count;
        } 
        else if (count == 1 and leter != max_1) {
            max_2 = leter;
            ++count; 
            if (leter > max_1) {
                max_2 = max_1;
                max_1 = leter;
            }    
        }
        if (count > 1) {
            if (leter != max_1 or leter != max_1) {
                if (leter > max_1) {
                    max_2 = max_1;
                    max_1 = leter;
                } 
                else if (leter < max_1 and leter > max_2) {
                    max_2 = leter;
                }
            }
        }
    }
    cout << max_2 << endl;
}
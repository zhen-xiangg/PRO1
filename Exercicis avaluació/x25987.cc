#include <iostream>
using namespace std;

int main () {
    int number;
    while (cin >> number) {
        int original_n = number, n1, n2, n3, count = 1, pic = 0, count_2 = 0;
        while (number > 9) {
            ++count;
            number /=10;
        }
        if (count > 2) {
            for (int i = 0; i < count; ++ i) {
                n3 = original_n % 10;
                original_n /=10;
                if (count_2 == 0) {
                    ++count_2;
                    n1 = n3;
                }
                else if (count_2 == 1) {
                    ++count_2;
                    n2 = n3;
                } 
                else{
                    if (n1 < n2 and n2 > n3) ++ pic;
                    n1 = n2;
                    n2 = n3;                      
                }
            }
        }
        cout << pic << endl;
    }
}
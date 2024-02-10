#include <iostream>
using namespace std;

int main() {
    int number_d, number_n, number_t, result = 0;
    cin >> number_d >> number_n >> number_t;
    for (int i = 0; i < number_t; ++i){
        int allowance;
        cin >> allowance;
        number_n += allowance;
        number_n -= number_d;
        if (number_n > 0){
            ++result;
        }
    }
    cout  << result << endl;
}




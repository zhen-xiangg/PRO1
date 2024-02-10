#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    int n1;
    cin >> n1;
    for (int i = 0; i < n1; ++i) {
        int n2;
        cin >> n2;
        double n3, min , max, average = 0;
        cin >> n3;
        average += n3;
        min = n3;
        max = n3;
        for (int j = 1; j < n2; ++j) {
            cin >> n3;
            average += n3;
            if (n3 < min) min = n3;
            else if (n3 > max) max = n3;
        }
        cout << min << " " << max << " " << average/n2  << endl;
    }
}
#include <iostream>
using namespace std;
#include <cmath>

double degree (double n) {
    n = n * (M_PI/180); 
    return n;
}

double sine(double n) {
    cout.setf(ios::fixed);
    cout.precision(6);   
    double sine_n = sin(degree(n));
    return sine_n;
}

double cosine(double n) {
    cout.setf(ios::fixed);
    cout.precision(6);
    double cosine_n = cos(degree(n));
    return cosine_n;
}

int main() {
    double n;    
    while (cin >> n) {
        cout << sine(n) << " " << cosine(n) << endl;
    }
}
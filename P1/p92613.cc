#include <iostream>
using namespace std;

int main() {

    double num;
    int a, b, c;
    cin >> num;
    if ((num - int(num)) == 0){
        a = num;
        b = a;
        c = a;
    }
    else{
        a = num;
        b = num + 1;
        if ((num - double(a)) >= 0.5){
            c = b;}
        else{
            c = a;
        } 
    }  
    cout << a << " " << b << " " << c <<endl;    
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int n_k = n - 1;
    int n_j = 0;
    for (int i = 1; i <= n; ++i) {
        for (int k = 1; k <= n_k; ++k){
            cout << '+';
        } 
        n_k -= 1;  
        cout << '/';
        for (int j = 1; j <= n_j; ++j) {
            cout << '*';
        }
        ++ n_j;
        cout << endl;
  }
}
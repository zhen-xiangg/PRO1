#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int G = 1000000000;
    int n;
    while (cin >> n) {
        int x;
	    vector<int> v(1001, 0);
	    for (int i = 0; i < n; ++i) {
		    cin >> x;
		    v[x - G] = v[x - G] + 1;
	    }
	    for (int j = 0; j < 1001; ++j) {
		    if (v[j] != 0) cout << G + j <<" : "<< v[j] << endl; 
		}
    } 
}
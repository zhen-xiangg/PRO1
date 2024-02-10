#include <iostream>
using namespace std;

int posicion(const string &s, int b, int a, char c1, char c2) {
    int k = (a + b)/2;
    while (s[k] != c2 or s[k - 1] != c1) {
        if (c1 == s[k]) a = k + 1;
        else if(s[k] != c1 and s[k] != c2 and s[k] == s[s.length() - 1]) b = k - 1;
        else if (s[k] == c2 and s[k - 1] != c1) b = k - 1;
        else return k;
        k = (a + b)/2;
    }
    return k;
}

void numberOccurrences(const string &s, int &n1, int &n2, int &n3){
    int m = s.length() - 1;
    if (s[0] == '(' and s[m] == ':') {
        n1 = posicion(s, m, 0, '(', '-');
        n2 = posicion(s, m, n1,'-', ':') - n1;
        n3 = m + 1 - n1 - n2; 
    }
    else if (s[0] == ':' and s[m] == '(') {
        n1 = posicion(s, m, 0, ':', '-');
        n2 = posicion(s, m, n1,'-', '(') - n1;
        n3 = m + 1 - n1 - n2; 
    }
    else if (s[0] == ':' and s[m] == ')') { 
        n1 = posicion(s, m, 0, ':', '-');
        n2 = posicion(s, m, n1,'-', ')') - n1;
        n3 = m + 1 - n1 - n2; 
    }
    else {
        n1 = posicion(s, m, 0, ')', '-');
        n2 = posicion(s, m, n1,'-', ':') - n1 ;
        n3 = m + 1 - n1 - n2; 
    }
}

int numberHappyOrSadSubsequences(const string &s){
    int n1 = 0, n2 = 0, n3 = 0;
    numberOccurrences(s, n1, n2, n3);
    int resultado = n1 * n2 * n3;
    return resultado;    
}

int main() {
    string s;
    while (cin >> s) {
        int a=numberHappyOrSadSubsequences(s);
        cout << a << endl;
    }
}
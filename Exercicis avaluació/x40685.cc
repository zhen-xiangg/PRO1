#include <iostream>
using namespace std;

int main () {
    int num1, num2, num3;
    string operador, comparador;
    while (cin >> num1 >> operador >> num2 >> comparador >> num3) {
        int operacion = 0;
        if (operador == "+") operacion = num1 + num2;
        else if (operador == "-") operacion = num1 - num2;
        else if (operador == "*") operacion = num1 * num2;

        bool result = false;
        if ((comparador == "<") and (operacion < num3)) result = true;
        else if ((comparador == ">") and (operacion > num3)) result = true;
        else if ((comparador == "<=") and (operacion <= num3)) result = true;
        else if ((comparador == ">=") and (operacion >= num3)) result = true;
        else if ((comparador == "==") and (operacion == num3)) result = true;
        else if ((comparador == "!=") and (operacion != num3)) result = true;
        if (result) cout << "true" << endl;
        else cout << "false" << endl;
    }
}
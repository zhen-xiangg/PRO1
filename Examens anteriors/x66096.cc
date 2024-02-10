#include <iostream>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(2);
    int year;
    double emissions;
    string activity;
    cin >> year >> emissions >> activity;
    if (activity == "making_things") cout << "Making things produced " << 0.31*emissions << " CO2 Gt in " << year << endl;
    if (activity == "pluggin_in") cout << "Pluggin in produced " << 0.27*emissions << " CO2 Gt in " << year << endl;
    if (activity == "growing_things") cout << "Growing things produced " << 0.19*emissions << " CO2 Gt in " << year << endl;
    if (activity == "getting_around") cout << "Getting around produced " << 0.16*emissions << " CO2 Gt in " << year << endl;
    if (activity == "keeping_warm_and_cold") cout << "Keeping warm and cold produced " << 0.07*emissions << " CO2 Gt in " << year << endl;
}
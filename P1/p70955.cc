#include <iostream>
using namespace std;

int main() {
    int years, days, hours, minutes, seconds;
    int s_years, s_days, s_hours, s_minutes;
    cin >> years >> days >> hours >> minutes >> seconds;
    s_years = years*31536000;
    s_days = days*86400;
    s_hours = hours*3600;
    s_minutes = minutes*60;
    cout << s_years + s_days + s_hours + s_minutes + seconds << endl;
}

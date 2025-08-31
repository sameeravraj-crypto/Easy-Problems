#include <iostream>
using namespace std;
int main() {
    float principal, rate, time, si;
    cout << "Enter Principal amount: ";
    cin >> principal;
    cout << "Enter Rate of interest: ";
    cin >> rate;
    cout << "Enter Time period(years): ";
    cin >> time;
    si= (principal * rate * time) / 100;
    cout << "Simple Interest = " << si << endl;
    return 0;
}

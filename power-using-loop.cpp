#include <iostream>
using namespace std;
int main() {
    int base, e, result = 1;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> e;
    for (int i = 0; i < e; i++)
    {
        result = result * base;
    }
    cout << base << " ^ " << e << " = " << result << endl;
    return 0;
}

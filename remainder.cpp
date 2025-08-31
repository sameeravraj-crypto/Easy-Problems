#include <iostream>
using namespace std;
int main() {
    int num, divisor;
    cout << "Enter divident: ";
    cin >> num;
    cout << "Enter divisor: ";
    cin >> divisor;
    int remainder = num % divisor;
    cout << "Remainder = " << remainder;
    return 0;
}

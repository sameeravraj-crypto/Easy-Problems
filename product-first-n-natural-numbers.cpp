#include <iostream>
using namespace std;
int main() {
    int n;
    long long product = 1;
    cout << "Enter a number n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        product = product * i;
    }
    cout << "Product of first " << n << " natural numbers = " << product << endl;
    return 0;
}

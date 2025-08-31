#include <iostream>
using namespace std;
int main() {
    float Length, Width, area;
    cout << "Enter length of rectangle: ";
    cin >> Length;
    cout << "Enter width of rectangle: ";
    cin >> Width;
    area = Length*Width;
    cout << "Area of rectangle = " << area << endl;
    return 0;
}

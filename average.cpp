#include<iostream>
using namespace std;
int main()
{
int num1,num2,num3,sum;
float avg;
cout << "Enter first number: ";
cin >> num1;
cout << "Enter second number: ";
cin >> num2;
cout << "Enter third number: ";
cin >> num3;
sum = num1+num2+num3;
avg=sum/3.0;
cout << "Average of three numbers = " << avg;
return 0;
}

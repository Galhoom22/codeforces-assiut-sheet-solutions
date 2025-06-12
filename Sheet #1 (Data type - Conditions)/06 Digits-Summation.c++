// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F
#include <iostream>
using namespace std;

int main() {
    long long number1, number2;

    // Input the two numbers
    cin >> number1 >> number2;

    // Extract last digits
    int lastDigit1 = number1 % 10;
    int lastDigit2 = number2 % 10;

    // Output their sum
    cout << lastDigit1 + lastDigit2;

    return 0;
}

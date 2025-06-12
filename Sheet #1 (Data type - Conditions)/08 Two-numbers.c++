// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float num1, num2;

    // Input two float numbers
    cin >> num1 >> num2;

    // Perform operations
    float division = num1 / num2;

    // Output floor, ceil, and round of the division result
    cout << "floor " << num1 << " / " << num2 << " = " << floor(division) << endl;
    cout << "ceil "  << num1 << " / " << num2 << " = " << ceil(division) << endl;
    cout << "round " << num1 << " / " << num2 << " = " << round(division) << endl;

    return 0;
}

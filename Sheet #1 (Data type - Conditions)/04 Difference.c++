// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D
#include <iostream>
using namespace std;

int main() {
    long long a, b, c, d;

    // Input four numbers
    cin >> a >> b >> c >> d;

    // Calculate the difference between the two products
    long long result = (a * b) - (c * d);

    // Output the result
    cout << "Difference = " << result;

    return 0;
}

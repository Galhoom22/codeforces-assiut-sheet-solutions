// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double PI = 3.141592653;
    double radius;

    // Input the radius
    cin >> radius;

    // Calculate the area of the circle
    double area = PI * radius * radius;

    // Output the area with 9 digits of precision
    cout << fixed << setprecision(9) << area;

    return 0;
}

// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q
#include <iostream>
using namespace std;

int main() {
    float x, y;
    cin >> x >> y;

    if (x == 0 && y == 0) {
        cout << "Origem";        // Origin
    } else if (x == 0) {
        cout << "Eixo Y";        // On Y axis
    } else if (y == 0) {
        cout << "Eixo X";        // On X axis
    } else if (x > 0 && y > 0) {
        cout << "Q1";            // First quadrant
    } else if (x < 0 && y > 0) {
        cout << "Q2";            // Second quadrant
    } else if (x < 0 && y < 0) {
        cout << "Q3";            // Third quadrant
    } else {
        cout << "Q4";            // Fourth quadrant
    }

    return 0;
}

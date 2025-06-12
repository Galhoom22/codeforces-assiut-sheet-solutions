// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int thousandsDigit = (num / 1000) % 10;

    if (thousandsDigit % 2 == 0) {
        cout << "EVEN";
    } else {
        cout << "ODD";
    }

    return 0;
}

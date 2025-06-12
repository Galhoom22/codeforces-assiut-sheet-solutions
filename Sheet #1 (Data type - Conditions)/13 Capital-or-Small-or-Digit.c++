// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
// ASCII Table Reference: http://sticksandstones.kstrom.com/appen.html
#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "ALPHA\nIS CAPITAL";
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "ALPHA\nIS SMALL";
    } else {
        cout << "IS DIGIT";
    }

    return 0;
}

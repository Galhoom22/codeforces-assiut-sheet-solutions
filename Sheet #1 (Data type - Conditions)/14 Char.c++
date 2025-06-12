// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
// ASCII Table Reference: http://sticksandstones.kstrom.com/appen.html
#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        ch += 32;  // Convert to lowercase
    } else if (ch >= 'a' && ch <= 'z') {
        ch -= 32;  // Convert to uppercase
    }

    cout << ch;
    return 0;
}

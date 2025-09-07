/*
    link : https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C

    Steps
    1. set ch
    2. read ch
    3. if ch = 'z' print 'a'
    4. else print ch + 1
*/
#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch == 'z')
        cout << 'a';
    else
        cout << char(ch + 1);

    return 0;
}

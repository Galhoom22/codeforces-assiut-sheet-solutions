// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L
#include <iostream>
using namespace std;

int main() {
    string name1, father1;
    string name2, father2;

    // Input names and fathers
    cin >> name1 >> father1 >> name2 >> father2;

    // Check if they have the same father
    if (father1 == father2) {
        cout << "ARE Brothers";
    } else {
        cout << "NOT";
    }

    return 0;
}

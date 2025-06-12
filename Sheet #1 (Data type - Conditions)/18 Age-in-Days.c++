// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R
#include <iostream>
using namespace std;

int main() {
    int totalDays;
    cin >> totalDays;

    int years = totalDays / 365;
    int remainingDays = totalDays % 365;
    int months = remainingDays / 30;
    remainingDays %= 30;

    cout << years << " years\n";
    cout << months << " months\n";
    cout << remainingDays << " days\n";

    return 0;
}

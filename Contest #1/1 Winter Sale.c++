/*
    link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A

    Steps
    1. set X, P
	2. read X, P
    3. use this formula to calculate the Original Price:
        Original = P / (1 - (X / 100.0))
    4. print the Original Price with 2 digits after the decimal point
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double X, P;
    cin >> X >> P;
    double Original = P / (1 - (X / 100.0));
    cout << fixed << setprecision(2) << Original << endl;
    return 0;
}

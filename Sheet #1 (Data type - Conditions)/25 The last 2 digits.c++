// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y
/*
    pesudocode
    1. Multiply A * B * C * D
    2. Get the last two digits of the result using (result % 100)
    3. print that value
*/
#include <iostream>
using namespace std;
int main()
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    long long result = A * B * C * D;
    int lastTwoDigits = result % 100;
    cout << lastTwoDigits << endl;
    return 0;
}

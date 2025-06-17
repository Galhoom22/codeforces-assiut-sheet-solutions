// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X
/*
    pseudocode
    1. Define function findIntersection(l1, r1, l2, r2)
    2. Set start = max(l1, l2)
    3. Set end = min(r1, r2)
    4. If start ≤ end Then
            Print start, end
       Else
            Print -1
*/
#include <iostream>
using namespace std;

int main()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    int start = max(l1, l2);
    int end = min(r1, r2);
    if (start <= end) {
        cout << start << " " << end << endl;
    }
    else {
        cout << -1 << endl;
    }
    return 0;
}

// link : https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E

/*
    Steps

    1. Read two integers a and b from the input
    2. check if both a and b are zero if so print "NO"
    3. check if a and b are equal or if the difference between a and b is 1 if so print "YES"
    4. if none of the above conditions are met print "NO"
*/
#include <iostream>
using namespace std;

int main()
{
    int a, b;
	cin >> a >> b;

    if (a == 0 && b == 0 ) {
		cout << "NO";
    }
    else if ((a == b) || (a - b == 1) || (b - a == 1)) {
        cout << "YES";
    }
    else {
		cout << "NO";
    }
    return 0;
}

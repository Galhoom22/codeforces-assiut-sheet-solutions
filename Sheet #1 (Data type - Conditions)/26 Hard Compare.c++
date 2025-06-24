// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z

/*
	1. Set A,B, C, D
	2. Read A,B, C, D
	3. set value1 = B * log((double)A)
	4. set value2 = D * log((double)C)
	5. if value1 > value2 then print "YES"
	6. else print "NO"
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long A, B, C, D;
	cin >> A >> B >> C >> D;
	double value1 = B * log((double)A); // we used log and double together to avoid overflow when comparing A^B and C^D
	double value2 = D * log((double)C);
	if (value1 > value2) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}

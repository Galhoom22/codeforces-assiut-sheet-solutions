// link : https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D

/*
	steps approach 1:
    1. set a, b, c 
	2. read a, b, c
    3. if (a + b - c == d) print "YES"
	   else if ( a + b * c == d) print "YES"
	   eles if (a - b + c == d) print "YES"
	   else if (a - b * c == d) print "YES"
	   else if (a * b + c == d) print "YES"
	   else if (a * b - c == d) print "YES"
	   else print "NO"

	steps approach 2:
	1. set a, b, c
	2. read a, b, c
	3. if ( (a + b - c == d) || ( a + b * c == d) || (a - b + c == d) || (a - b * c == d) || (a * b + c == d) || (a * b - c == d) ) print "YES"
	   else print "NO"
*/

#include <iostream>
using namespace std;
int main()
{
	long long a, b, c, d;
	cin >> a >> b >> c >> d;

	/*
	Approach 1: Using multiple if else statements not recommended
		if (a + b - c == d) {
			cout << "YES" << "\n";
		}
		else if (a + b * c == d) {
			cout << "YES" << "\n";
		}
		else if (a - b + c == d) {
			cout << "YES" << "\n";
		}
		else if (a - b * c == d) {
			cout << "YES" << "\n";
		}
		else if (a * b + c == d) {
			cout << "YES" << "\n";
		}
		else if (a * b - c == d) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}
	*/

	// Approach 2: Using single if statement with logical OR operator
	if ((a+b-c == d) || (a+b*c == d) || (a-b+c == d) || (a-b*c == d) || (a*b+c==d) || (a*b-c==d)) {
		cout << "YES" << "\n";
	}
	else {
		cout << "NO" << "\n";
	}
}

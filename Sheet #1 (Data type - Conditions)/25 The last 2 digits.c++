// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y
/*
    pesudocode
	to avoid overflow, we will use modulo 100 for each multiplication
	    1. set A, B, C, D
	    2. read A, B, C, D
        3. set result = 1
        4. set result = (result * A) % 100
        5. set result = (result * B) % 100
        6. set result = (reuslt * C) % 100
        7. set result = (result * D) % 100
        8. if result < 10:
           print "0" + result
        9. else:
		    print result
*/
#include <iostream>
using namespace std;
int main()
{
	long long A, B, C, D; // long long to handle large numbers
	cin >> A >> B >> C >> D;
    long long result = 1;
    result = (result * A) % 100;
    result = (result * B) % 100;
    result = (result * C) % 100;
    result = (result * D) % 100;

    if (result < 10) {
        cout << "0" << result << endl;
    }
    else {
        cout << result << endl;
    }
    return 0;
}

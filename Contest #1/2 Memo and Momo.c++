/*
    link : https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B

    Steps
	1 Read a, b, k
	2 Check if both divisible by k
	3 Else check if only a divisible
	4 Else check if only b divisible
	5 Otherwise print "No One"
*/

#include <iostream>
#include <cstdint>   
using namespace std;

int main() {
    int64_t a, b, k;
    cin >> a >> b >> k;

    if (a % k == 0 && b % k == 0) {
        cout << "Both";
    }
    else if (a % k == 0) {
        cout << "Memo";
    }
    else if (b % k == 0) {
        cout << "Momo";
    }
    else {
        cout << "No One";
    }
    return 0;
}

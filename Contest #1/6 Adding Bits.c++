// link : https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/F

/*
	Steps

	1. Read two integers from the user
	2. print the result of the bitwise XOR Operation between the two integers
*/
#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	cout << (num1 ^ num2);
}

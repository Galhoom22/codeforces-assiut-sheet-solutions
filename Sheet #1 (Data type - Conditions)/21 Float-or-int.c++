// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Method 1
        float num;
        cin >> num;
        int INT_part = num;
        float decimal_part = num - INT_part;
        if(decimal_part != 0){
            cout << "float " << INT_part << " " << decimal_part;
        }
        else {
            cout << "int " << INT_part;
        }
    // end Method 1

    // Method 2
        float number;
        cin >> number;

        int intPart = static_cast<int>(number);
        float decimalPart = number - intPart;

        if (decimalPart == 0) {
            cout << "int " << intPart;
        } else {
            cout << fixed << setprecision(3);
            cout << "float " << intPart << " " << decimalPart;
        }
    // end Method 2
    return 0;
}
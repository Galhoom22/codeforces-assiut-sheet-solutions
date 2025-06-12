// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W
#include <iostream>
using namespace std;

int main()
{
    // Method 1 Not Efficient
        /* long long n1,n2,n3;
        char ope , equ;
        cin >> n1 >> ope >> n2 >> equ >> n3;

        if(ope == '+'){
            if(n1 + n2 == n3){
                cout << "Yes";
            }
            else 
                cout << n1 + n2;
        }

        else if(ope == '-'){
            if(n1 - n2 == n3){
                cout << "Yes";
            }
            else 
                cout << n1 - n2;
        }

        else if(ope == '*'){
            if(n1 * n2 == n3){
                cout << "Yes";
            }
            else 
                cout << n1 * n2;
        } */
    // end Method 1

    // Method 2 Efficient
        long long n1, n2, n3, result;
        char op, eq;
        cin >> n1 >> op >> n2 >> eq >> n3;
        if(op == '+') result = n1 + n2;
        else if(op == '-') result = n1 - n2;
        else if(op == '*') result = n1 * n2;
        if(result == n3)
            cout << "Yes";
        else 
            cout << result;
    // end Method 2
    return 0;
}
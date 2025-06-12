// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
#include <iostream>
using namespace std;

int main()
{
    // Method 1 Not Efficient
        /* int n1,n2;
        char ope = '>';
        cin >> n1 >> ope >> n2;
        if(ope == '>'){
            if(n1 > n2){
                cout << "Right";
            }
            else
                cout << "Wrong";
        }

        else if(ope == '<'){
            if(n1 < n2){
                cout << "Right";
            }
            else
                cout << "Wrong";
        }

        else if(ope == '='){
            if(n1 == n2){
                cout << "Right";
            }
            else
                cout << "Wrong";
        } */
    // end Method 1

    // Method 2
        int a, b;
        char op;
        cin >> a >> op >> b;

        bool isCorrect = false;

        if (op == '>') {
            isCorrect = (a > b);
        } 
        else if (op == '<') {
            isCorrect = (a < b);
        } 
        else if (op == '=') {
            isCorrect = (a == b);
        }

        cout << (isCorrect ? "Right" : "Wrong");

        return 0;
    // end Method 2
}
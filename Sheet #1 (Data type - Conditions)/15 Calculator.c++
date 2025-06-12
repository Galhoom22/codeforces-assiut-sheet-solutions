// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O
#include <iostream>
using namespace std;

int main() {
    long long num1, num2;
    char op;

    cin >> num1 >> op >> num2;

    switch (op) {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            if (num2 == 0)
                cout << "Error division / 0 !!!";
            else
                cout << num1 / num2;
            break;
        default:
            cout << "Invalid operator";
    }

    return 0;
}

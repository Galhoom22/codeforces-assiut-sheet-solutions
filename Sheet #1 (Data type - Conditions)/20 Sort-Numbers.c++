// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // Method 1 Not Efficient
        /* int n1,n2,n3,max,min,avg;
        cin >> n1 >> n2 >> n3;
        if(n1 >= n2 && n1 >= n3) {// n1 max
            max = n1;
            if(n2 >= n3) {
                avg = n2;
                min = n3;
            }
            else if(n3 >= n2){
                avg = n3;
                min = n2;
            }
        }

        else if(n2 >= n1 && n2 >= n3) {// n2 max
            max = n2;
            if(n1 >= n3) {
                avg = n1;
                min = n3;
            }
            else if(n3 >= n1){
                avg = n3;
                min = n1;
            }
        }

        else if(n3 >= n1 && n3 >= n2) {// n3 max
            max = n3;
            if(n1 >= n2) {
                avg = n1;
                min = n2;
            }
            else if(n2 >= n1){
                avg = n2;
                min = n1;
            }
        }

        cout << min << endl << avg << endl << max << endl << endl << n1 << endl 
        << n2 << endl << n3 << endl; */
    // end Method 1

    // Method 2 Efficient
        int a, b, c;
        cin >> a >> b >> c;

        int nums[] = {a, b, c};
        sort(nums, nums + 3);

        // Print sorted
        for (int i = 0; i < 3; i++) {
            cout << nums[i] << endl;
        }

        cout << endl;

        // Print original
        cout << a << endl << b << endl << c << endl;
    // end Method 2
    return 0;
}
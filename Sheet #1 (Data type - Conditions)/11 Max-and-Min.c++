// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
#include <iostream>
using namespace std;

int main()
{
    // Method 1 Not Efficient
        /* int n1 , n2 , n3 , max , min;
        cin >> n1 >> n2 >> n3;
        if(n1 >= n2 && n1 >= n3){ // n1 max
            max = n1;

            if(n2 > n3){
                min = n3;
            }
            else 
                min = n2;
        }

        else if(n2 >= n1 && n2 >= n3){ // n2 max
            max = n2;

            if(n1 > n3){
                min = n3;
            }
            else 
                min = n1;
        }

        else if(n3 >= n1 && n3 >= n2){ // n3 max
            max = n3;

            if(n1 > n2){
                min = n2;
            }
            else 
                min = n1;
        }

        cout << min << " " << max; */
    // end Method 1

    // Method 2 optimized
        int a, b, c;
        cin >> a >> b >> c;

        // Initialize min and max with a
        int minimum = a;
        int maximum = a;

        // Compare with b
        if (b < minimum) minimum = b;
        if (b > maximum) maximum = b;

        // Compare with c
        if (c < minimum) minimum = c;
        if (c > maximum) maximum = c;

        cout << minimum << " " << maximum;
    // end Method 2
    return 0;
}
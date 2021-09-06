#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*      Level -> Easy
       ->Paytm Interview Challenge | Q-39
       Q: Given an integer x, return true if x is palindrome integer.
       - Example

            I/P : N = 121
            O/P : True

            I/P : N = -121
            O/P : False
*/
bool solve(int x)
{
    ll temp =  x, res = 0, ten = 10;
    while(temp > 0)
    {
        ll digit = temp % 10;
        if(digit < 0) return 0;
        res = digit + (res * ten);
        temp /= 10;
    }
    if(x == res) return 1;
    return 0;
}
int main()
{
    ll x;
    cin>>x;
    if(solve(x)) cout<<"True\n";
    else cout<<"False\n";
}



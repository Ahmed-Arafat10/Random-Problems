#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*      Level -> Easy
       ->Flipkart Interview Challenge | Q-38
       Q: Given an integer N, convert all Zeros of N to 5.
       - Example

            I/P : N = 1004
            O/P : 1554

            I/P : N = 123
            O/P : 123
*/
void solve(int x)
{
    ll temp =  x, res = 0, ten = 1;
    while(temp > 0)
    {
        ll digit = temp % 10;
        if(digit == 0) res = res + (5 * ten);
        else res = res + (digit * ten);
        ten *= 10;
        temp /= 10;
    }
    cout<<res<<"\n";
}
int main()
{
    ll x;
    cin>>x;
    solve(x);
}



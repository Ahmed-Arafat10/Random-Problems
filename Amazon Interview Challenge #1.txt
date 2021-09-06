#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*      Level -> Easy
       ->Amazon Interview Challenge | Q-36
       Q: Given an Queue Q of N elements. Reverse the given Queue
       - Example

            I/P : N = 6    Q = 4 3 1 10 2 6
            O/P : 6 2 10 1 3 4
*/
//Recursion Time Complexity -> O(N) / Space Complexity -> O(N(N+1)/2)
void solveR(ll n,queue<ll>q1)
{
    if(q1.size() == 1 && n != 1) return;
    if(n != 1) q1.pop();
    n++;
    solveR(n,q1);
    cout<<q1.front()<<" ";
}
void solve(queue<ll>q1, ll sz)
{
    stack<ll>s1;
    for(ll i =0; i<sz; i++)
    {

        s1.push(q1.front());
        q1.pop();
    }
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
}
int main()
{
    ll n;
    cin>>n;
    queue<ll>q1;
    for(ll i = 0; i<n; i++)
    {
        ll x;
        cin>>x;
        q1.push(x);
    }
    solveR(1, q1);
    solve(q1, (ll)q1.size());

}



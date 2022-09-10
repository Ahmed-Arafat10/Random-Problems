#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll x;
bool solve(unordered_map<ll,ll>&mp1,ll arr[],ll n)
{
    ll sum = 0, res ;
    for(ll i =0; i<n; i++)
    {
        sum += arr[i];
        if(sum == 0) return 1;
        if(mp1.find(sum) != mp1.end())
        {
            cout<<mp1[sum]+1<<","<<i;
            return 1;
        }
        else mp1[sum] = i;
    }
}

int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i =0; i<n; i++) scanf("%lld",&arr[i]);
    unordered_map<ll,ll>mp;
    solve(mp,arr,n);
}
/*
5
4 2 -3 1 6
*/

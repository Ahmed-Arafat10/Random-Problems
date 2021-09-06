#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	///Sum of two numbers = Target in Array
    ll n , target;
    cin>>n>>target;
    ll arr[n];
    unordered_map<ll,ll>mp;
    for(ll i = 0; i<n; i++) cin>>arr[i];
    for(ll i = 0; i<n; i++)
    {
        ll Diff = target - arr[i];
        if(mp.find(Diff) != mp.end())
        {
            cout<<i<<" "<<mp[Diff]<<"\n";
        }/// 2 4 4    Target = 8
        else   mp[ arr[i] ]  = i;
    }
}

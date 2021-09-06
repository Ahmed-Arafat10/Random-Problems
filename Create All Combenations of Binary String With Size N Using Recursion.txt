#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll arr[100000];
void fun(ll n,ll x)
{
    if(n == x)
    {
        for(ll i = 0; i<x; i++)
            cout<<arr[i];
        cout<<"\n";
        return;
    }
    for(ll i = 0; i<= 1; i++)
    {
        arr[n] = i;
        fun(n+1,x);
    }
}
int main()
{
	ll num;
	cin>>num;
    fun(0,num);
}

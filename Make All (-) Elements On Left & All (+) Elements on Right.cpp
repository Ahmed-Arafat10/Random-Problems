#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
//Two Pointers Algorithm
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i =0; i<n; i++) cin>>arr[i];
    ll l = 0 , r = n-1;
    while(l<r)
    {
        if(arr[l] > 0 && arr[r] < 0)
        {
            swap(arr[l],arr[r]);
            l++,r--;
        }
         if(arr[l] < 0) l++;
         if(arr[r] > 0) r--;
    }
    puts("");
    for(ll i =0; i<n; i++) cout<<arr[i]<<" ";
}

/*
9
-6 3 -8 5 -7 -9 12 -4 2
*/

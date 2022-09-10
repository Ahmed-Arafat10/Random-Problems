#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

/*
    NN
    Amazon Interview Challenge|Q-45
    Difficulty: Medium
            Q:Given an array of N integers and an integer K.Find the length of the longest sub-array
            with the sum of the elements equal to the given value k
*/
int main()
{
    ll n, target, sum = 0, res = 0;
    cin>>n>>target;
    unordered_map<ll,ll>mp;
    ll arr[n];
    for(ll i = 0; i<n; i++) cin>>arr[i];
    for(ll i = 0; i<n; i++)
    {
        sum += arr[i];
        if(sum == target) res = i+1;
        if(mp.find(sum) == mp.end()) mp[sum] = i;
        if(mp.find(sum - target) != mp.end())
        {
            res =max(i - mp[sum - K],res);
        }
    }
    cout<<res;
}
/*
6 15
10 5 4 4 1 1

6 15
10 5 2 7 1 9
10 -> 0    -5
15 -> 1     0
17 -> 2     2
24 -> 3     9
25 -> 4     10
34 -> 5


6 15
1 1 1 1 5 10


{-5, 8, -14, 2, 4, 12}
-5 -> 0
3 -> 1
-11 -> 2
-9 -> 3
-5 -> 4
*/

